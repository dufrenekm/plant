; Auto-generated. Do not edit!


(cl:in-package kortex_driver-msg)


;//! \htmlinclude ManualFocus.msg.html

(cl:defclass <ManualFocus> (roslisp-msg-protocol:ros-message)
  ((value
    :reader value
    :initarg :value
    :type cl:integer
    :initform 0))
)

(cl:defclass ManualFocus (<ManualFocus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ManualFocus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ManualFocus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name kortex_driver-msg:<ManualFocus> is deprecated: use kortex_driver-msg:ManualFocus instead.")))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <ManualFocus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader kortex_driver-msg:value-val is deprecated.  Use kortex_driver-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ManualFocus>) ostream)
  "Serializes a message object of type '<ManualFocus>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'value)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'value)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'value)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ManualFocus>) istream)
  "Deserializes a message object of type '<ManualFocus>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'value)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'value)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'value)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'value)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ManualFocus>)))
  "Returns string type for a message object of type '<ManualFocus>"
  "kortex_driver/ManualFocus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ManualFocus)))
  "Returns string type for a message object of type 'ManualFocus"
  "kortex_driver/ManualFocus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ManualFocus>)))
  "Returns md5sum for a message object of type '<ManualFocus>"
  "d9d213e8c146065ec958333c617eb1a6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ManualFocus)))
  "Returns md5sum for a message object of type 'ManualFocus"
  "d9d213e8c146065ec958333c617eb1a6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ManualFocus>)))
  "Returns full string definition for message of type '<ManualFocus>"
  (cl:format cl:nil "~%uint32 value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ManualFocus)))
  "Returns full string definition for message of type 'ManualFocus"
  (cl:format cl:nil "~%uint32 value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ManualFocus>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ManualFocus>))
  "Converts a ROS message object to a list"
  (cl:list 'ManualFocus
    (cl:cons ':value (value msg))
))
