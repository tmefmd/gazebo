/*
 * Copyright 2011 Nate Koenig & Andrew Howard
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
/* Desc: 3D Axis Visualization Class
 * Author: Nate Koenig
 */

#ifndef AXISVISUAL_HH
#define AXISVISUAL_HH

#include <string>

#include "rendering/Visual.hh"

namespace gazebo
{
  namespace rendering
  {
    /// \addtogroup gazebo_rendering Rendering
    /// \{

    /// \class AxisVisual AxisVisual.hh rendering/AxisVisual.hh
    /// \brief Basic axis visualization
    class AxisVisual : public Visual
    {
      /// \brief Constructor
      /// \param _name Name of the AxisVisual
      /// \param _vis Parent visual
      public: AxisVisual(const std::string &_name, VisualPtr _vis);

      /// \brief Destructor
      public: virtual ~AxisVisual();

      /// \brief Load the axis visual
      public: virtual void Load();

      /// \brief Load the rotation tube
      public: void ShowRotation(unsigned int _axis);

      /// \brief Scale the X axis
      /// \param _scale Scaling factor
      public: void ScaleXAxis(const math::Vector3 &_scale);

      /// \brief Scale the Y axis
      /// \param _scale Scaling factor
      public: void ScaleYAxis(const math::Vector3 &_scale);

      /// \brief Scale the Z axis
      /// \param _scale Scaling factor
      public: void ScaleZAxis(const math::Vector3 &_scale);

      /// \brief Set the material used to render and axis
      /// \param _axis The number of the axis (0, 1, 2 = x,y,z)
      /// \param _material The name of the material to apply to the axis
      public: void SetAxisMaterial(unsigned int _axis,
                                   const std::string &_material);

      private: ArrowVisualPtr xAxis;
      private: ArrowVisualPtr yAxis;
      private: ArrowVisualPtr zAxis;
    };
    /// \}
  }
}
#endif
