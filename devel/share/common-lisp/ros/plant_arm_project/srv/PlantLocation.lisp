; Auto-generated. Do not edit!


(cl:in-package plant_arm_project-srv)


;//! \htmlinclude PlantLocation-request.msg.html

(cl:defclass <PlantLocation-request> (roslisp-msg-protocol:ros-message)
  ((loc
    :reader loc
    :initarg :loc
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass PlantLocation-request (<PlantLocation-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlantLocation-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlantLocation-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name plant_arm_project-srv:<PlantLocation-request> is deprecated: use plant_arm_project-srv:PlantLocation-request instead.")))

(cl:ensure-generic-function 'loc-val :lambda-list '(m))
(cl:defmethod loc-val ((m <PlantLocation-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader plant_arm_project-srv:loc-val is deprecated.  Use plant_arm_project-srv:loc instead.")
  (loc m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlantLocation-request>) ostream)
  "Serializes a message object of type '<PlantLocation-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'loc) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlantLocation-request>) istream)
  "Deserializes a message object of type '<PlantLocation-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'loc) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlantLocation-request>)))
  "Returns string type for a service object of type '<PlantLocation-request>"
  "plant_arm_project/PlantLocationRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlantLocation-request)))
  "Returns string type for a service object of type 'PlantLocation-request"
  "plant_arm_project/PlantLocationRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlantLocation-request>)))
  "Returns md5sum for a message object of type '<PlantLocation-request>"
  "16118a8f43cad3bb5033f2cceac3aadb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlantLocation-request)))
  "Returns md5sum for a message object of type 'PlantLocation-request"
  "16118a8f43cad3bb5033f2cceac3aadb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlantLocation-request>)))
  "Returns full string definition for message of type '<PlantLocation-request>"
  (cl:format cl:nil "geometry_msgs/Vector3 loc~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlantLocation-request)))
  "Returns full string definition for message of type 'PlantLocation-request"
  (cl:format cl:nil "geometry_msgs/Vector3 loc~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlantLocation-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'loc))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlantLocation-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PlantLocation-request
    (cl:cons ':loc (loc msg))
))
;//! \htmlinclude PlantLocation-response.msg.html

(cl:defclass <PlantLocation-response> (roslisp-msg-protocol:ros-message)
  ((sucess
    :reader sucess
    :initarg :sucess
    :type cl:integer
    :initform 0))
)

(cl:defclass PlantLocation-response (<PlantLocation-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlantLocation-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlantLocation-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name plant_arm_project-srv:<PlantLocation-response> is deprecated: use plant_arm_project-srv:PlantLocation-response instead.")))

(cl:ensure-generic-function 'sucess-val :lambda-list '(m))
(cl:defmethod sucess-val ((m <PlantLocation-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader plant_arm_project-srv:sucess-val is deprecated.  Use plant_arm_project-srv:sucess instead.")
  (sucess m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlantLocation-response>) ostream)
  "Serializes a message object of type '<PlantLocation-response>"
  (cl:let* ((signed (cl:slot-value msg 'sucess)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlantLocation-response>) istream)
  "Deserializes a message object of type '<PlantLocation-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'sucess) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlantLocation-response>)))
  "Returns string type for a service object of type '<PlantLocation-response>"
  "plant_arm_project/PlantLocationResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlantLocation-response)))
  "Returns string type for a service object of type 'PlantLocation-response"
  "plant_arm_project/PlantLocationResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlantLocation-response>)))
  "Returns md5sum for a message object of type '<PlantLocation-response>"
  "16118a8f43cad3bb5033f2cceac3aadb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlantLocation-response)))
  "Returns md5sum for a message object of type 'PlantLocation-response"
  "16118a8f43cad3bb5033f2cceac3aadb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlantLocation-response>)))
  "Returns full string definition for message of type '<PlantLocation-response>"
  (cl:format cl:nil "int64 sucess~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlantLocation-response)))
  "Returns full string definition for message of type 'PlantLocation-response"
  (cl:format cl:nil "int64 sucess~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlantLocation-response>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlantLocation-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PlantLocation-response
    (cl:cons ':sucess (sucess msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PlantLocation)))
  'PlantLocation-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PlantLocation)))
  'PlantLocation-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlantLocation)))
  "Returns string type for a service object of type '<PlantLocation>"
  "plant_arm_project/PlantLocation")