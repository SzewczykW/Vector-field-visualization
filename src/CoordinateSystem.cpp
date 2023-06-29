#include "CoordinateSystem.h"

CoordinateSystem::CoordinateSystem ()
    : _Settings ( new Settings () )
{
    _Settings->SetXFun ( funType::A );
    _Settings->SetYFun ( funType::A );
    _Settings->SetZFun ( funType::A );
    _Settings->SetA ( 1.0 );
    _Settings->SetB ( 1.0 );
    _Settings->SetC ( 1.0 );
    _Settings->SetXMin ( -5.0 );
    _Settings->SetXMax ( 5.0 );
    _Settings->SetYMin ( -5.0 );
    _Settings->SetYMax ( 5.0 );
    _Settings->SetZMin ( -5.0 );
    _Settings->SetZMax ( 5.0 );
    _Settings->SetXScale ( 1 );
    _Settings->SetYScale ( 1 );
    _Settings->SetZScale ( 1 );
    _Settings->SetAutoScale ( true );
    _Settings->SetArrowLength ( 1.0 );
    _Settings->SetXRot ( 0.0 );
    _Settings->SetYRot ( 0.0 );
    _Settings->SetZRot ( 0.0 );
}

CoordinateSystem::~CoordinateSystem ()
{
    delete _Settings;
}

void CoordinateSystem::setSettings ( Settings* settings )
{
    _Settings = settings;
}

Settings* CoordinateSystem::getSettings ()
{
    return _Settings;
}

void CoordinateSystem::draw ( wxDC* dc, const double& width, const double& height ) const
{
    dc->SetBackground ( wxBrush ( wxColour ( 255, 255, 255 ) ) );
    dc->Clear ();
    drawAxes ( dc, width, height );
    drawArrow ( dc, width, height, 0 );
    drawSurface ( dc, width, height );
    drawVectorField ( dc, width, height );
}

void CoordinateSystem::drawAxes ( wxDC* dc, const double& width, const double& height ) const
{
    auto centerX = width / 2;
    auto centerY = height / 2;
    auto offsetX = width / 8;
    auto offsetY = height / 5;

    auto xMin = _Settings->GetXMin ();
    auto xMax = _Settings->GetXMax ();
    auto yMin = _Settings->GetYMin ();
    auto yMax = _Settings->GetYMax ();
    auto zMin = _Settings->GetZMin ();
    auto zMax = _Settings->GetZMax ();


    drawLine ( dc, xMin, 0, 0, xMax, 0, 0, wxColor ( 255, 0, 0 ), width, height );

    drawLine ( dc, 0, yMin, 0, 0, yMax, 0, wxColor ( 0, 255, 0 ), width, height );

    drawLine ( dc, 0, 0, zMin, 0, 0, zMax, wxColor ( 0, 0, 255 ), width, height );
}

void CoordinateSystem::drawArrow ( wxDC* dc, const double& x, const double& y, const double& z ) const
{
    // Draw arrow

}

void CoordinateSystem::drawSurface ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw surface

}

void CoordinateSystem::drawVectorField ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw vector field

}

Projection CoordinateSystem::project ( const double& x, const double& y, const double& z,
                                       const double& width, const double& height ) const
{
    // Projection
    //TRANSFROMATION MATRIX = projection * rotation * input

    Projection projection;
    Matrix projectionMatrix ( 4, 4 );
    Vector4D input ( x, y, z );

    //matrix to translate our coordinate system to center of screen
    auto translation = _Settings->GetTranslationMatrix ( width / 128.0, -width / 128.0, 0 );

    //rotation matrices
    auto rotationX = _Settings->GetXRotMatrix ();
    auto rotationY = _Settings->GetYRotMatrix ();
    auto rotationZ = _Settings->GetZRotMatrix ();

    //scaling coord system so it would be readable
    auto scale = _Settings->GetScaleMatrix ( width / 16.0, width / 16.0, width / 16.0 );

    //transformation matrix
    auto transform = translation * rotationX * rotationY * rotationZ * scale;

    //projection matrix parameters
    //near and far are set to 1 and -1
    double n = 1.5 * width; // near has to be positive and different than absolute value of far
    double f = width; // far has to be negative
    //left, right, top, bottom are set to width and height of screen
    double l = 0;
    double r = width;
    double t = 0;
    double b = height;

    projectionMatrix.set ( 0, 0, 2.0 * n / ( r - l ) );
    projectionMatrix.set ( 1, 1, 2.0 * n / ( t - b ) );
    projectionMatrix.set ( 0, 2, ( r + l ) / ( r - l ) );
    projectionMatrix.set ( 1, 2, ( t + b ) / ( t - b ) );
    projectionMatrix.set ( 2, 2, -( f + n ) / ( f - n ) );
    projectionMatrix.set ( 2, 3, -2.0 * f * n / ( f - n ) );
    projectionMatrix.set ( 3, 2, -1.0 );

    auto transformedPos = projectionMatrix * transform * input;

    projection.x = transformedPos.getX ();
    projection.y = transformedPos.getY ();
    return projection;
}

void CoordinateSystem::drawLine ( wxDC* dc, const double& x1, const double& y1, const double& z1,
                                  const double& x2, const double& y2, const double& z2, const wxColor& color,
                                  const double& width, const double& height ) const
{
    dc->SetPen ( wxPen ( color ) );
    Vector4D v1 ( x1, y1, z1 );
    Vector4D v2 ( x2, y2, z2 );

    auto p1 = project ( v1.getX (), v1.getY (), v1.getZ (), width, height );
    auto p2 = project ( v2.getX (), v2.getY (), v2.getZ (), width, height );

    dc->DrawLine ( p1.x, p1.y, p2.x, p2.y );
}