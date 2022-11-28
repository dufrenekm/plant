
"use strict";

let ApiOptions = require('./ApiOptions.js');
let KortexError = require('./KortexError.js');
let SubErrorCodes = require('./SubErrorCodes.js');
let ErrorCodes = require('./ErrorCodes.js');
let PositionCommand = require('./PositionCommand.js');
let FrequencyResponse = require('./FrequencyResponse.js');
let TorqueCalibration = require('./TorqueCalibration.js');
let Servoing = require('./Servoing.js');
let EncoderDerivativeParameters = require('./EncoderDerivativeParameters.js');
let CustomDataIndex = require('./CustomDataIndex.js');
let RampResponse = require('./RampResponse.js');
let AxisOffsets = require('./AxisOffsets.js');
let CustomDataSelection = require('./CustomDataSelection.js');
let ControlLoopParameters = require('./ControlLoopParameters.js');
let CommandModeInformation = require('./CommandModeInformation.js');
let VectorDriveParameters = require('./VectorDriveParameters.js');
let ActuatorConfig_ControlModeInformation = require('./ActuatorConfig_ControlModeInformation.js');
let ControlLoop = require('./ControlLoop.js');
let CommandMode = require('./CommandMode.js');
let AxisPosition = require('./AxisPosition.js');
let LoopSelection = require('./LoopSelection.js');
let CoggingFeedforwardMode = require('./CoggingFeedforwardMode.js');
let ControlLoopSelection = require('./ControlLoopSelection.js');
let ActuatorConfig_ControlMode = require('./ActuatorConfig_ControlMode.js');
let StepResponse = require('./StepResponse.js');
let ActuatorConfig_ServiceVersion = require('./ActuatorConfig_ServiceVersion.js');
let TorqueOffset = require('./TorqueOffset.js');
let ActuatorConfig_SafetyLimitType = require('./ActuatorConfig_SafetyLimitType.js');
let SafetyIdentifierBankA = require('./SafetyIdentifierBankA.js');
let CoggingFeedforwardModeInformation = require('./CoggingFeedforwardModeInformation.js');
let ActuatorCyclic_MessageId = require('./ActuatorCyclic_MessageId.js');
let ActuatorCyclic_Feedback = require('./ActuatorCyclic_Feedback.js');
let ActuatorCyclic_Command = require('./ActuatorCyclic_Command.js');
let StatusFlags = require('./StatusFlags.js');
let ActuatorCyclic_CustomData = require('./ActuatorCyclic_CustomData.js');
let CommandFlags = require('./CommandFlags.js');
let ActuatorCyclic_ServiceVersion = require('./ActuatorCyclic_ServiceVersion.js');
let Faults = require('./Faults.js');
let Waypoint = require('./Waypoint.js');
let ServoingMode = require('./ServoingMode.js');
let ControllerConfiguration = require('./ControllerConfiguration.js');
let PreComputedJointTrajectoryElement = require('./PreComputedJointTrajectoryElement.js');
let ServoingModeNotification = require('./ServoingModeNotification.js');
let FactoryEvent = require('./FactoryEvent.js');
let ProtectionZoneHandle = require('./ProtectionZoneHandle.js');
let LedState = require('./LedState.js');
let Pose = require('./Pose.js');
let GripperCommand = require('./GripperCommand.js');
let WristDigitalInputIdentifier = require('./WristDigitalInputIdentifier.js');
let OperatingModeNotificationList = require('./OperatingModeNotificationList.js');
let SafetyEvent = require('./SafetyEvent.js');
let TrajectoryErrorIdentifier = require('./TrajectoryErrorIdentifier.js');
let GpioConfigurationList = require('./GpioConfigurationList.js');
let Base_Position = require('./Base_Position.js');
let ProtectionZoneEvent = require('./ProtectionZoneEvent.js');
let ControllerElementState = require('./ControllerElementState.js');
let Orientation = require('./Orientation.js');
let FullUserProfile = require('./FullUserProfile.js');
let FirmwareComponentVersion = require('./FirmwareComponentVersion.js');
let SequenceTaskHandle = require('./SequenceTaskHandle.js');
let Base_ControlMode = require('./Base_ControlMode.js');
let GpioPinPropertyFlags = require('./GpioPinPropertyFlags.js');
let ControllerConfigurationList = require('./ControllerConfigurationList.js');
let ArmStateNotification = require('./ArmStateNotification.js');
let CartesianTrajectoryConstraint = require('./CartesianTrajectoryConstraint.js');
let TrajectoryErrorType = require('./TrajectoryErrorType.js');
let Base_Stop = require('./Base_Stop.js');
let TwistCommand = require('./TwistCommand.js');
let Delay = require('./Delay.js');
let ControlModeNotificationList = require('./ControlModeNotificationList.js');
let ServoingModeNotificationList = require('./ServoingModeNotificationList.js');
let WrenchMode = require('./WrenchMode.js');
let LimitationType = require('./LimitationType.js');
let OperatingModeNotification = require('./OperatingModeNotification.js');
let Gripper = require('./Gripper.js');
let GpioEvent = require('./GpioEvent.js');
let Finger = require('./Finger.js');
let NetworkEvent = require('./NetworkEvent.js');
let Timeout = require('./Timeout.js');
let ConfigurationChangeNotificationList = require('./ConfigurationChangeNotificationList.js');
let RobotEventNotification = require('./RobotEventNotification.js');
let Base_ControlModeNotification = require('./Base_ControlModeNotification.js');
let NetworkType = require('./NetworkType.js');
let Point = require('./Point.js');
let ControllerElementEventType = require('./ControllerElementEventType.js');
let EventIdSequenceInfoNotification = require('./EventIdSequenceInfoNotification.js');
let ProtectionZoneList = require('./ProtectionZoneList.js');
let CartesianSpeed = require('./CartesianSpeed.js');
let TrajectoryErrorReport = require('./TrajectoryErrorReport.js');
let WaypointValidationReport = require('./WaypointValidationReport.js');
let ControllerType = require('./ControllerType.js');
let BridgeType = require('./BridgeType.js');
let SnapshotType = require('./SnapshotType.js');
let RequestedActionType = require('./RequestedActionType.js');
let SequenceInfoNotificationList = require('./SequenceInfoNotificationList.js');
let WrenchLimitation = require('./WrenchLimitation.js');
let JointTrajectoryConstraint = require('./JointTrajectoryConstraint.js');
let Base_ControlModeInformation = require('./Base_ControlModeInformation.js');
let BridgeList = require('./BridgeList.js');
let FullIPv4Configuration = require('./FullIPv4Configuration.js');
let NetworkNotification = require('./NetworkNotification.js');
let ChangeWrench = require('./ChangeWrench.js');
let ActionNotification = require('./ActionNotification.js');
let SoundType = require('./SoundType.js');
let MapList = require('./MapList.js');
let ControllerList = require('./ControllerList.js');
let SequenceList = require('./SequenceList.js');
let JointAngles = require('./JointAngles.js');
let SwitchControlMapping = require('./SwitchControlMapping.js');
let ZoneShape = require('./ZoneShape.js');
let Base_CapSenseConfig = require('./Base_CapSenseConfig.js');
let ControllerInputType = require('./ControllerInputType.js');
let ControllerBehavior = require('./ControllerBehavior.js');
let TransformationMatrix = require('./TransformationMatrix.js');
let GpioCommand = require('./GpioCommand.js');
let TrajectoryContinuityMode = require('./TrajectoryContinuityMode.js');
let ShapeType = require('./ShapeType.js');
let JointTrajectoryConstraintType = require('./JointTrajectoryConstraintType.js');
let SequenceInformation = require('./SequenceInformation.js');
let ControllerConfigurationMode = require('./ControllerConfigurationMode.js');
let MapHandle = require('./MapHandle.js');
let ConstrainedOrientation = require('./ConstrainedOrientation.js');
let EmergencyStop = require('./EmergencyStop.js');
let MappingInfoNotification = require('./MappingInfoNotification.js');
let Base_ServiceVersion = require('./Base_ServiceVersion.js');
let MapEvent = require('./MapEvent.js');
let BridgePortConfig = require('./BridgePortConfig.js');
let JointsLimitationsList = require('./JointsLimitationsList.js');
let ActionNotificationList = require('./ActionNotificationList.js');
let JointTorques = require('./JointTorques.js');
let ActionType = require('./ActionType.js');
let CartesianTrajectoryConstraint_type = require('./CartesianTrajectoryConstraint_type.js');
let Base_CapSenseMode = require('./Base_CapSenseMode.js');
let BridgeIdentifier = require('./BridgeIdentifier.js');
let Base_RotationMatrixRow = require('./Base_RotationMatrixRow.js');
let UserNotification = require('./UserNotification.js');
let AdmittanceMode = require('./AdmittanceMode.js');
let ControllerHandle = require('./ControllerHandle.js');
let UserList = require('./UserList.js');
let SystemTime = require('./SystemTime.js');
let ConfigurationChangeNotification_configuration_change = require('./ConfigurationChangeNotification_configuration_change.js');
let ControllerNotification = require('./ControllerNotification.js');
let CommunicationInterfaceConfiguration = require('./CommunicationInterfaceConfiguration.js');
let Base_SafetyIdentifier = require('./Base_SafetyIdentifier.js');
let Map = require('./Map.js');
let WifiInformation = require('./WifiInformation.js');
let ConstrainedPose = require('./ConstrainedPose.js');
let TransformationRow = require('./TransformationRow.js');
let WaypointList = require('./WaypointList.js');
let ActionEvent = require('./ActionEvent.js');
let Gen3GpioPinId = require('./Gen3GpioPinId.js');
let KinematicTrajectoryConstraints = require('./KinematicTrajectoryConstraints.js');
let ControllerElementHandle = require('./ControllerElementHandle.js');
let ActivateMapHandle = require('./ActivateMapHandle.js');
let TrajectoryInfoType = require('./TrajectoryInfoType.js');
let WifiConfiguration = require('./WifiConfiguration.js');
let TrajectoryErrorElement = require('./TrajectoryErrorElement.js');
let Waypoint_type_of_waypoint = require('./Waypoint_type_of_waypoint.js');
let Twist = require('./Twist.js');
let WifiConfigurationList = require('./WifiConfigurationList.js');
let ArmStateInformation = require('./ArmStateInformation.js');
let JointLimitation = require('./JointLimitation.js');
let SequenceTask = require('./SequenceTask.js');
let Snapshot = require('./Snapshot.js');
let SequenceTasksPair = require('./SequenceTasksPair.js');
let JointTorque = require('./JointTorque.js');
let JointSpeed = require('./JointSpeed.js');
let MappingHandle = require('./MappingHandle.js');
let BridgeConfig = require('./BridgeConfig.js');
let ChangeTwist = require('./ChangeTwist.js');
let WifiSecurityType = require('./WifiSecurityType.js');
let ProtectionZoneNotification = require('./ProtectionZoneNotification.js');
let UserProfileList = require('./UserProfileList.js');
let ControllerElementHandle_identifier = require('./ControllerElementHandle_identifier.js');
let AppendActionInformation = require('./AppendActionInformation.js');
let Sequence = require('./Sequence.js');
let Xbox360AnalogInputIdentifier = require('./Xbox360AnalogInputIdentifier.js');
let RobotEventNotificationList = require('./RobotEventNotificationList.js');
let ConfigurationNotificationEvent = require('./ConfigurationNotificationEvent.js');
let OperatingModeInformation = require('./OperatingModeInformation.js');
let FactoryNotification = require('./FactoryNotification.js');
let SequenceTasksRange = require('./SequenceTasksRange.js');
let GpioPinConfiguration = require('./GpioPinConfiguration.js');
let Action = require('./Action.js');
let ProtectionZoneNotificationList = require('./ProtectionZoneNotificationList.js');
let SequenceTasks = require('./SequenceTasks.js');
let WifiInformationList = require('./WifiInformationList.js');
let ProtectionZone = require('./ProtectionZone.js');
let NetworkHandle = require('./NetworkHandle.js');
let GripperMode = require('./GripperMode.js');
let MapGroup = require('./MapGroup.js');
let Wrench = require('./Wrench.js');
let FirmwareBundleVersions = require('./FirmwareBundleVersions.js');
let ConstrainedJointAngles = require('./ConstrainedJointAngles.js');
let JointNavigationDirection = require('./JointNavigationDirection.js');
let Mapping = require('./Mapping.js');
let MapGroupList = require('./MapGroupList.js');
let NetworkNotificationList = require('./NetworkNotificationList.js');
let OperatingMode = require('./OperatingMode.js');
let TwistLimitation = require('./TwistLimitation.js');
let Ssid = require('./Ssid.js');
let IPv4Information = require('./IPv4Information.js');
let ActionExecutionState = require('./ActionExecutionState.js');
let ActuatorInformation = require('./ActuatorInformation.js');
let Base_RotationMatrix = require('./Base_RotationMatrix.js');
let SequenceTaskConfiguration = require('./SequenceTaskConfiguration.js');
let WifiEncryptionType = require('./WifiEncryptionType.js');
let MapElement = require('./MapElement.js');
let BridgeResult = require('./BridgeResult.js');
let ActionList = require('./ActionList.js');
let IKData = require('./IKData.js');
let CartesianLimitationList = require('./CartesianLimitationList.js');
let WrenchCommand = require('./WrenchCommand.js');
let ProtectionZoneInformation = require('./ProtectionZoneInformation.js');
let TrajectoryInfo = require('./TrajectoryInfo.js');
let ConstrainedPosition = require('./ConstrainedPosition.js');
let ControllerEvent = require('./ControllerEvent.js');
let ConfigurationChangeNotification = require('./ConfigurationChangeNotification.js');
let SequenceInfoNotification = require('./SequenceInfoNotification.js');
let IPv4Configuration = require('./IPv4Configuration.js');
let UserProfile = require('./UserProfile.js');
let Base_JointSpeeds = require('./Base_JointSpeeds.js');
let MapEvent_events = require('./MapEvent_events.js');
let Query = require('./Query.js');
let NavigationDirection = require('./NavigationDirection.js');
let ControllerEventType = require('./ControllerEventType.js');
let MapGroupHandle = require('./MapGroupHandle.js');
let GpioAction = require('./GpioAction.js');
let Base_GpioConfiguration = require('./Base_GpioConfiguration.js');
let SafetyNotificationList = require('./SafetyNotificationList.js');
let Action_action_parameters = require('./Action_action_parameters.js');
let GpioBehavior = require('./GpioBehavior.js');
let CartesianLimitation = require('./CartesianLimitation.js');
let ServoingModeInformation = require('./ServoingModeInformation.js');
let AngularWaypoint = require('./AngularWaypoint.js');
let RobotEvent = require('./RobotEvent.js');
let ConstrainedJointAngle = require('./ConstrainedJointAngle.js');
let Admittance = require('./Admittance.js');
let SignalQuality = require('./SignalQuality.js');
let ControllerState = require('./ControllerState.js');
let MappingList = require('./MappingList.js');
let SequenceTasksConfiguration = require('./SequenceTasksConfiguration.js');
let Xbox360DigitalInputIdentifier = require('./Xbox360DigitalInputIdentifier.js');
let UserEvent = require('./UserEvent.js');
let CartesianWaypoint = require('./CartesianWaypoint.js');
let ControllerNotification_state = require('./ControllerNotification_state.js');
let BridgeStatus = require('./BridgeStatus.js');
let UserNotificationList = require('./UserNotificationList.js');
let PreComputedJointTrajectory = require('./PreComputedJointTrajectory.js');
let MappingInfoNotificationList = require('./MappingInfoNotificationList.js');
let BackupEvent = require('./BackupEvent.js');
let JointAngle = require('./JointAngle.js');
let PasswordChange = require('./PasswordChange.js');
let AdvancedSequenceHandle = require('./AdvancedSequenceHandle.js');
let SequenceHandle = require('./SequenceHandle.js');
let GripperRequest = require('./GripperRequest.js');
let ChangeJointSpeeds = require('./ChangeJointSpeeds.js');
let ControllerNotificationList = require('./ControllerNotificationList.js');
let ActionHandle = require('./ActionHandle.js');
let BaseCyclic_ServiceVersion = require('./BaseCyclic_ServiceVersion.js');
let BaseFeedback = require('./BaseFeedback.js');
let ActuatorCustomData = require('./ActuatorCustomData.js');
let BaseCyclic_Feedback = require('./BaseCyclic_Feedback.js');
let BaseCyclic_CustomData = require('./BaseCyclic_CustomData.js');
let BaseCyclic_Command = require('./BaseCyclic_Command.js');
let ActuatorFeedback = require('./ActuatorFeedback.js');
let ActuatorCommand = require('./ActuatorCommand.js');
let ArmState = require('./ArmState.js');
let Permission = require('./Permission.js');
let CountryCode = require('./CountryCode.js');
let DeviceTypes = require('./DeviceTypes.js');
let UARTStopBits = require('./UARTStopBits.js');
let CountryCodeIdentifier = require('./CountryCodeIdentifier.js');
let UARTDeviceIdentification = require('./UARTDeviceIdentification.js');
let DeviceHandle = require('./DeviceHandle.js');
let Connection = require('./Connection.js');
let Empty = require('./Empty.js');
let NotificationType = require('./NotificationType.js');
let CartesianReferenceFrame = require('./CartesianReferenceFrame.js');
let UARTSpeed = require('./UARTSpeed.js');
let SafetyStatusValue = require('./SafetyStatusValue.js');
let UARTParity = require('./UARTParity.js');
let SafetyHandle = require('./SafetyHandle.js');
let Timestamp = require('./Timestamp.js');
let NotificationHandle = require('./NotificationHandle.js');
let NotificationOptions = require('./NotificationOptions.js');
let Unit = require('./Unit.js');
let UserProfileHandle = require('./UserProfileHandle.js');
let UARTConfiguration = require('./UARTConfiguration.js');
let SafetyNotification = require('./SafetyNotification.js');
let UARTWordLength = require('./UARTWordLength.js');
let JointAccelerationSoftLimits = require('./JointAccelerationSoftLimits.js');
let DesiredSpeeds = require('./DesiredSpeeds.js');
let ControlConfig_ControlModeNotification = require('./ControlConfig_ControlModeNotification.js');
let JointSpeedSoftLimits = require('./JointSpeedSoftLimits.js');
let ControlConfigurationEvent = require('./ControlConfigurationEvent.js');
let PayloadInformation = require('./PayloadInformation.js');
let TwistLinearSoftLimit = require('./TwistLinearSoftLimit.js');
let ControlConfig_Position = require('./ControlConfig_Position.js');
let CartesianTransform = require('./CartesianTransform.js');
let TwistAngularSoftLimit = require('./TwistAngularSoftLimit.js');
let ControlConfig_ControlModeInformation = require('./ControlConfig_ControlModeInformation.js');
let ControlConfig_ControlMode = require('./ControlConfig_ControlMode.js');
let ControlConfig_ServiceVersion = require('./ControlConfig_ServiceVersion.js');
let GravityVector = require('./GravityVector.js');
let CartesianReferenceFrameInfo = require('./CartesianReferenceFrameInfo.js');
let AngularTwist = require('./AngularTwist.js');
let LinearTwist = require('./LinearTwist.js');
let KinematicLimitsList = require('./KinematicLimitsList.js');
let ToolConfiguration = require('./ToolConfiguration.js');
let ControlConfig_JointSpeeds = require('./ControlConfig_JointSpeeds.js');
let ControlConfigurationNotification = require('./ControlConfigurationNotification.js');
let KinematicLimits = require('./KinematicLimits.js');
let DeviceConfig_CapSenseMode = require('./DeviceConfig_CapSenseMode.js');
let DeviceConfig_CapSenseConfig = require('./DeviceConfig_CapSenseConfig.js');
let FirmwareVersion = require('./FirmwareVersion.js');
let RunModes = require('./RunModes.js');
let SafetyInformationList = require('./SafetyInformationList.js');
let SafetyThreshold = require('./SafetyThreshold.js');
let ModelNumber = require('./ModelNumber.js');
let SafetyConfigurationList = require('./SafetyConfigurationList.js');
let CalibrationStatus = require('./CalibrationStatus.js');
let DeviceConfig_ServiceVersion = require('./DeviceConfig_ServiceVersion.js');
let SafetyEnable = require('./SafetyEnable.js');
let CalibrationItem = require('./CalibrationItem.js');
let CalibrationResult = require('./CalibrationResult.js');
let CalibrationParameter_value = require('./CalibrationParameter_value.js');
let PowerOnSelfTestResult = require('./PowerOnSelfTestResult.js');
let DeviceType = require('./DeviceType.js');
let RunMode = require('./RunMode.js');
let CapSenseRegister = require('./CapSenseRegister.js');
let MACAddress = require('./MACAddress.js');
let DeviceConfig_SafetyLimitType = require('./DeviceConfig_SafetyLimitType.js');
let RebootRqst = require('./RebootRqst.js');
let SafetyInformation = require('./SafetyInformation.js');
let SerialNumber = require('./SerialNumber.js');
let BootloaderVersion = require('./BootloaderVersion.js');
let SafetyConfiguration = require('./SafetyConfiguration.js');
let SafetyStatus = require('./SafetyStatus.js');
let CalibrationParameter = require('./CalibrationParameter.js');
let PartNumber = require('./PartNumber.js');
let Calibration = require('./Calibration.js');
let IPv4Settings = require('./IPv4Settings.js');
let PartNumberRevision = require('./PartNumberRevision.js');
let CalibrationElement = require('./CalibrationElement.js');
let DeviceHandles = require('./DeviceHandles.js');
let DeviceManager_ServiceVersion = require('./DeviceManager_ServiceVersion.js');
let GripperConfig_SafetyIdentifier = require('./GripperConfig_SafetyIdentifier.js');
let RobotiqGripperStatusFlags = require('./RobotiqGripperStatusFlags.js');
let CustomDataUnit = require('./CustomDataUnit.js');
let GripperCyclic_Feedback = require('./GripperCyclic_Feedback.js');
let MotorCommand = require('./MotorCommand.js');
let MotorFeedback = require('./MotorFeedback.js');
let GripperCyclic_Command = require('./GripperCyclic_Command.js');
let GripperCyclic_MessageId = require('./GripperCyclic_MessageId.js');
let GripperCyclic_ServiceVersion = require('./GripperCyclic_ServiceVersion.js');
let GripperCyclic_CustomData = require('./GripperCyclic_CustomData.js');
let I2CReadParameter = require('./I2CReadParameter.js');
let GPIOPull = require('./GPIOPull.js');
let EthernetDuplex = require('./EthernetDuplex.js');
let InterconnectConfig_GPIOConfiguration = require('./InterconnectConfig_GPIOConfiguration.js');
let GPIOState = require('./GPIOState.js');
let GPIOValue = require('./GPIOValue.js');
let InterconnectConfig_SafetyIdentifier = require('./InterconnectConfig_SafetyIdentifier.js');
let I2CWriteParameter = require('./I2CWriteParameter.js');
let I2CConfiguration = require('./I2CConfiguration.js');
let EthernetConfiguration = require('./EthernetConfiguration.js');
let EthernetSpeed = require('./EthernetSpeed.js');
let I2CReadRegisterParameter = require('./I2CReadRegisterParameter.js');
let InterconnectConfig_ServiceVersion = require('./InterconnectConfig_ServiceVersion.js');
let EthernetDevice = require('./EthernetDevice.js');
let GPIOMode = require('./GPIOMode.js');
let I2CWriteRegisterParameter = require('./I2CWriteRegisterParameter.js');
let EthernetDeviceIdentification = require('./EthernetDeviceIdentification.js');
let GPIOIdentifier = require('./GPIOIdentifier.js');
let UARTPortId = require('./UARTPortId.js');
let GPIOIdentification = require('./GPIOIdentification.js');
let I2CMode = require('./I2CMode.js');
let I2CDeviceIdentification = require('./I2CDeviceIdentification.js');
let I2CDeviceAddressing = require('./I2CDeviceAddressing.js');
let I2CData = require('./I2CData.js');
let I2CDevice = require('./I2CDevice.js');
let I2CRegisterAddressSize = require('./I2CRegisterAddressSize.js');
let InterconnectCyclic_CustomData = require('./InterconnectCyclic_CustomData.js');
let InterconnectCyclic_Command_tool_command = require('./InterconnectCyclic_Command_tool_command.js');
let InterconnectCyclic_Command = require('./InterconnectCyclic_Command.js');
let InterconnectCyclic_Feedback = require('./InterconnectCyclic_Feedback.js');
let InterconnectCyclic_Feedback_tool_feedback = require('./InterconnectCyclic_Feedback_tool_feedback.js');
let InterconnectCyclic_MessageId = require('./InterconnectCyclic_MessageId.js');
let InterconnectCyclic_CustomData_tool_customData = require('./InterconnectCyclic_CustomData_tool_customData.js');
let InterconnectCyclic_ServiceVersion = require('./InterconnectCyclic_ServiceVersion.js');
let ArmLaterality = require('./ArmLaterality.js');
let VisionModuleType = require('./VisionModuleType.js');
let InterfaceModuleType = require('./InterfaceModuleType.js');
let CompleteProductConfiguration = require('./CompleteProductConfiguration.js');
let ProductConfigurationEndEffectorType = require('./ProductConfigurationEndEffectorType.js');
let WristType = require('./WristType.js');
let BaseType = require('./BaseType.js');
let EndEffectorType = require('./EndEffectorType.js');
let ModelId = require('./ModelId.js');
let VisionConfig_RotationMatrixRow = require('./VisionConfig_RotationMatrixRow.js');
let SensorFocusAction = require('./SensorFocusAction.js');
let TranslationVector = require('./TranslationVector.js');
let Sensor = require('./Sensor.js');
let SensorIdentifier = require('./SensorIdentifier.js');
let FocusAction = require('./FocusAction.js');
let FrameRate = require('./FrameRate.js');
let IntrinsicProfileIdentifier = require('./IntrinsicProfileIdentifier.js');
let IntrinsicParameters = require('./IntrinsicParameters.js');
let OptionInformation = require('./OptionInformation.js');
let VisionNotification = require('./VisionNotification.js');
let VisionConfig_RotationMatrix = require('./VisionConfig_RotationMatrix.js');
let BitRate = require('./BitRate.js');
let OptionValue = require('./OptionValue.js');
let Option = require('./Option.js');
let SensorFocusAction_action_parameters = require('./SensorFocusAction_action_parameters.js');
let VisionEvent = require('./VisionEvent.js');
let SensorSettings = require('./SensorSettings.js');
let DistortionCoefficients = require('./DistortionCoefficients.js');
let Resolution = require('./Resolution.js');
let VisionConfig_ServiceVersion = require('./VisionConfig_ServiceVersion.js');
let FocusPoint = require('./FocusPoint.js');
let OptionIdentifier = require('./OptionIdentifier.js');
let ExtrinsicParameters = require('./ExtrinsicParameters.js');
let ManualFocus = require('./ManualFocus.js');
let FollowCartesianTrajectoryActionFeedback = require('./FollowCartesianTrajectoryActionFeedback.js');
let FollowCartesianTrajectoryGoal = require('./FollowCartesianTrajectoryGoal.js');
let FollowCartesianTrajectoryResult = require('./FollowCartesianTrajectoryResult.js');
let FollowCartesianTrajectoryFeedback = require('./FollowCartesianTrajectoryFeedback.js');
let FollowCartesianTrajectoryAction = require('./FollowCartesianTrajectoryAction.js');
let FollowCartesianTrajectoryActionGoal = require('./FollowCartesianTrajectoryActionGoal.js');
let FollowCartesianTrajectoryActionResult = require('./FollowCartesianTrajectoryActionResult.js');

module.exports = {
  ApiOptions: ApiOptions,
  KortexError: KortexError,
  SubErrorCodes: SubErrorCodes,
  ErrorCodes: ErrorCodes,
  PositionCommand: PositionCommand,
  FrequencyResponse: FrequencyResponse,
  TorqueCalibration: TorqueCalibration,
  Servoing: Servoing,
  EncoderDerivativeParameters: EncoderDerivativeParameters,
  CustomDataIndex: CustomDataIndex,
  RampResponse: RampResponse,
  AxisOffsets: AxisOffsets,
  CustomDataSelection: CustomDataSelection,
  ControlLoopParameters: ControlLoopParameters,
  CommandModeInformation: CommandModeInformation,
  VectorDriveParameters: VectorDriveParameters,
  ActuatorConfig_ControlModeInformation: ActuatorConfig_ControlModeInformation,
  ControlLoop: ControlLoop,
  CommandMode: CommandMode,
  AxisPosition: AxisPosition,
  LoopSelection: LoopSelection,
  CoggingFeedforwardMode: CoggingFeedforwardMode,
  ControlLoopSelection: ControlLoopSelection,
  ActuatorConfig_ControlMode: ActuatorConfig_ControlMode,
  StepResponse: StepResponse,
  ActuatorConfig_ServiceVersion: ActuatorConfig_ServiceVersion,
  TorqueOffset: TorqueOffset,
  ActuatorConfig_SafetyLimitType: ActuatorConfig_SafetyLimitType,
  SafetyIdentifierBankA: SafetyIdentifierBankA,
  CoggingFeedforwardModeInformation: CoggingFeedforwardModeInformation,
  ActuatorCyclic_MessageId: ActuatorCyclic_MessageId,
  ActuatorCyclic_Feedback: ActuatorCyclic_Feedback,
  ActuatorCyclic_Command: ActuatorCyclic_Command,
  StatusFlags: StatusFlags,
  ActuatorCyclic_CustomData: ActuatorCyclic_CustomData,
  CommandFlags: CommandFlags,
  ActuatorCyclic_ServiceVersion: ActuatorCyclic_ServiceVersion,
  Faults: Faults,
  Waypoint: Waypoint,
  ServoingMode: ServoingMode,
  ControllerConfiguration: ControllerConfiguration,
  PreComputedJointTrajectoryElement: PreComputedJointTrajectoryElement,
  ServoingModeNotification: ServoingModeNotification,
  FactoryEvent: FactoryEvent,
  ProtectionZoneHandle: ProtectionZoneHandle,
  LedState: LedState,
  Pose: Pose,
  GripperCommand: GripperCommand,
  WristDigitalInputIdentifier: WristDigitalInputIdentifier,
  OperatingModeNotificationList: OperatingModeNotificationList,
  SafetyEvent: SafetyEvent,
  TrajectoryErrorIdentifier: TrajectoryErrorIdentifier,
  GpioConfigurationList: GpioConfigurationList,
  Base_Position: Base_Position,
  ProtectionZoneEvent: ProtectionZoneEvent,
  ControllerElementState: ControllerElementState,
  Orientation: Orientation,
  FullUserProfile: FullUserProfile,
  FirmwareComponentVersion: FirmwareComponentVersion,
  SequenceTaskHandle: SequenceTaskHandle,
  Base_ControlMode: Base_ControlMode,
  GpioPinPropertyFlags: GpioPinPropertyFlags,
  ControllerConfigurationList: ControllerConfigurationList,
  ArmStateNotification: ArmStateNotification,
  CartesianTrajectoryConstraint: CartesianTrajectoryConstraint,
  TrajectoryErrorType: TrajectoryErrorType,
  Base_Stop: Base_Stop,
  TwistCommand: TwistCommand,
  Delay: Delay,
  ControlModeNotificationList: ControlModeNotificationList,
  ServoingModeNotificationList: ServoingModeNotificationList,
  WrenchMode: WrenchMode,
  LimitationType: LimitationType,
  OperatingModeNotification: OperatingModeNotification,
  Gripper: Gripper,
  GpioEvent: GpioEvent,
  Finger: Finger,
  NetworkEvent: NetworkEvent,
  Timeout: Timeout,
  ConfigurationChangeNotificationList: ConfigurationChangeNotificationList,
  RobotEventNotification: RobotEventNotification,
  Base_ControlModeNotification: Base_ControlModeNotification,
  NetworkType: NetworkType,
  Point: Point,
  ControllerElementEventType: ControllerElementEventType,
  EventIdSequenceInfoNotification: EventIdSequenceInfoNotification,
  ProtectionZoneList: ProtectionZoneList,
  CartesianSpeed: CartesianSpeed,
  TrajectoryErrorReport: TrajectoryErrorReport,
  WaypointValidationReport: WaypointValidationReport,
  ControllerType: ControllerType,
  BridgeType: BridgeType,
  SnapshotType: SnapshotType,
  RequestedActionType: RequestedActionType,
  SequenceInfoNotificationList: SequenceInfoNotificationList,
  WrenchLimitation: WrenchLimitation,
  JointTrajectoryConstraint: JointTrajectoryConstraint,
  Base_ControlModeInformation: Base_ControlModeInformation,
  BridgeList: BridgeList,
  FullIPv4Configuration: FullIPv4Configuration,
  NetworkNotification: NetworkNotification,
  ChangeWrench: ChangeWrench,
  ActionNotification: ActionNotification,
  SoundType: SoundType,
  MapList: MapList,
  ControllerList: ControllerList,
  SequenceList: SequenceList,
  JointAngles: JointAngles,
  SwitchControlMapping: SwitchControlMapping,
  ZoneShape: ZoneShape,
  Base_CapSenseConfig: Base_CapSenseConfig,
  ControllerInputType: ControllerInputType,
  ControllerBehavior: ControllerBehavior,
  TransformationMatrix: TransformationMatrix,
  GpioCommand: GpioCommand,
  TrajectoryContinuityMode: TrajectoryContinuityMode,
  ShapeType: ShapeType,
  JointTrajectoryConstraintType: JointTrajectoryConstraintType,
  SequenceInformation: SequenceInformation,
  ControllerConfigurationMode: ControllerConfigurationMode,
  MapHandle: MapHandle,
  ConstrainedOrientation: ConstrainedOrientation,
  EmergencyStop: EmergencyStop,
  MappingInfoNotification: MappingInfoNotification,
  Base_ServiceVersion: Base_ServiceVersion,
  MapEvent: MapEvent,
  BridgePortConfig: BridgePortConfig,
  JointsLimitationsList: JointsLimitationsList,
  ActionNotificationList: ActionNotificationList,
  JointTorques: JointTorques,
  ActionType: ActionType,
  CartesianTrajectoryConstraint_type: CartesianTrajectoryConstraint_type,
  Base_CapSenseMode: Base_CapSenseMode,
  BridgeIdentifier: BridgeIdentifier,
  Base_RotationMatrixRow: Base_RotationMatrixRow,
  UserNotification: UserNotification,
  AdmittanceMode: AdmittanceMode,
  ControllerHandle: ControllerHandle,
  UserList: UserList,
  SystemTime: SystemTime,
  ConfigurationChangeNotification_configuration_change: ConfigurationChangeNotification_configuration_change,
  ControllerNotification: ControllerNotification,
  CommunicationInterfaceConfiguration: CommunicationInterfaceConfiguration,
  Base_SafetyIdentifier: Base_SafetyIdentifier,
  Map: Map,
  WifiInformation: WifiInformation,
  ConstrainedPose: ConstrainedPose,
  TransformationRow: TransformationRow,
  WaypointList: WaypointList,
  ActionEvent: ActionEvent,
  Gen3GpioPinId: Gen3GpioPinId,
  KinematicTrajectoryConstraints: KinematicTrajectoryConstraints,
  ControllerElementHandle: ControllerElementHandle,
  ActivateMapHandle: ActivateMapHandle,
  TrajectoryInfoType: TrajectoryInfoType,
  WifiConfiguration: WifiConfiguration,
  TrajectoryErrorElement: TrajectoryErrorElement,
  Waypoint_type_of_waypoint: Waypoint_type_of_waypoint,
  Twist: Twist,
  WifiConfigurationList: WifiConfigurationList,
  ArmStateInformation: ArmStateInformation,
  JointLimitation: JointLimitation,
  SequenceTask: SequenceTask,
  Snapshot: Snapshot,
  SequenceTasksPair: SequenceTasksPair,
  JointTorque: JointTorque,
  JointSpeed: JointSpeed,
  MappingHandle: MappingHandle,
  BridgeConfig: BridgeConfig,
  ChangeTwist: ChangeTwist,
  WifiSecurityType: WifiSecurityType,
  ProtectionZoneNotification: ProtectionZoneNotification,
  UserProfileList: UserProfileList,
  ControllerElementHandle_identifier: ControllerElementHandle_identifier,
  AppendActionInformation: AppendActionInformation,
  Sequence: Sequence,
  Xbox360AnalogInputIdentifier: Xbox360AnalogInputIdentifier,
  RobotEventNotificationList: RobotEventNotificationList,
  ConfigurationNotificationEvent: ConfigurationNotificationEvent,
  OperatingModeInformation: OperatingModeInformation,
  FactoryNotification: FactoryNotification,
  SequenceTasksRange: SequenceTasksRange,
  GpioPinConfiguration: GpioPinConfiguration,
  Action: Action,
  ProtectionZoneNotificationList: ProtectionZoneNotificationList,
  SequenceTasks: SequenceTasks,
  WifiInformationList: WifiInformationList,
  ProtectionZone: ProtectionZone,
  NetworkHandle: NetworkHandle,
  GripperMode: GripperMode,
  MapGroup: MapGroup,
  Wrench: Wrench,
  FirmwareBundleVersions: FirmwareBundleVersions,
  ConstrainedJointAngles: ConstrainedJointAngles,
  JointNavigationDirection: JointNavigationDirection,
  Mapping: Mapping,
  MapGroupList: MapGroupList,
  NetworkNotificationList: NetworkNotificationList,
  OperatingMode: OperatingMode,
  TwistLimitation: TwistLimitation,
  Ssid: Ssid,
  IPv4Information: IPv4Information,
  ActionExecutionState: ActionExecutionState,
  ActuatorInformation: ActuatorInformation,
  Base_RotationMatrix: Base_RotationMatrix,
  SequenceTaskConfiguration: SequenceTaskConfiguration,
  WifiEncryptionType: WifiEncryptionType,
  MapElement: MapElement,
  BridgeResult: BridgeResult,
  ActionList: ActionList,
  IKData: IKData,
  CartesianLimitationList: CartesianLimitationList,
  WrenchCommand: WrenchCommand,
  ProtectionZoneInformation: ProtectionZoneInformation,
  TrajectoryInfo: TrajectoryInfo,
  ConstrainedPosition: ConstrainedPosition,
  ControllerEvent: ControllerEvent,
  ConfigurationChangeNotification: ConfigurationChangeNotification,
  SequenceInfoNotification: SequenceInfoNotification,
  IPv4Configuration: IPv4Configuration,
  UserProfile: UserProfile,
  Base_JointSpeeds: Base_JointSpeeds,
  MapEvent_events: MapEvent_events,
  Query: Query,
  NavigationDirection: NavigationDirection,
  ControllerEventType: ControllerEventType,
  MapGroupHandle: MapGroupHandle,
  GpioAction: GpioAction,
  Base_GpioConfiguration: Base_GpioConfiguration,
  SafetyNotificationList: SafetyNotificationList,
  Action_action_parameters: Action_action_parameters,
  GpioBehavior: GpioBehavior,
  CartesianLimitation: CartesianLimitation,
  ServoingModeInformation: ServoingModeInformation,
  AngularWaypoint: AngularWaypoint,
  RobotEvent: RobotEvent,
  ConstrainedJointAngle: ConstrainedJointAngle,
  Admittance: Admittance,
  SignalQuality: SignalQuality,
  ControllerState: ControllerState,
  MappingList: MappingList,
  SequenceTasksConfiguration: SequenceTasksConfiguration,
  Xbox360DigitalInputIdentifier: Xbox360DigitalInputIdentifier,
  UserEvent: UserEvent,
  CartesianWaypoint: CartesianWaypoint,
  ControllerNotification_state: ControllerNotification_state,
  BridgeStatus: BridgeStatus,
  UserNotificationList: UserNotificationList,
  PreComputedJointTrajectory: PreComputedJointTrajectory,
  MappingInfoNotificationList: MappingInfoNotificationList,
  BackupEvent: BackupEvent,
  JointAngle: JointAngle,
  PasswordChange: PasswordChange,
  AdvancedSequenceHandle: AdvancedSequenceHandle,
  SequenceHandle: SequenceHandle,
  GripperRequest: GripperRequest,
  ChangeJointSpeeds: ChangeJointSpeeds,
  ControllerNotificationList: ControllerNotificationList,
  ActionHandle: ActionHandle,
  BaseCyclic_ServiceVersion: BaseCyclic_ServiceVersion,
  BaseFeedback: BaseFeedback,
  ActuatorCustomData: ActuatorCustomData,
  BaseCyclic_Feedback: BaseCyclic_Feedback,
  BaseCyclic_CustomData: BaseCyclic_CustomData,
  BaseCyclic_Command: BaseCyclic_Command,
  ActuatorFeedback: ActuatorFeedback,
  ActuatorCommand: ActuatorCommand,
  ArmState: ArmState,
  Permission: Permission,
  CountryCode: CountryCode,
  DeviceTypes: DeviceTypes,
  UARTStopBits: UARTStopBits,
  CountryCodeIdentifier: CountryCodeIdentifier,
  UARTDeviceIdentification: UARTDeviceIdentification,
  DeviceHandle: DeviceHandle,
  Connection: Connection,
  Empty: Empty,
  NotificationType: NotificationType,
  CartesianReferenceFrame: CartesianReferenceFrame,
  UARTSpeed: UARTSpeed,
  SafetyStatusValue: SafetyStatusValue,
  UARTParity: UARTParity,
  SafetyHandle: SafetyHandle,
  Timestamp: Timestamp,
  NotificationHandle: NotificationHandle,
  NotificationOptions: NotificationOptions,
  Unit: Unit,
  UserProfileHandle: UserProfileHandle,
  UARTConfiguration: UARTConfiguration,
  SafetyNotification: SafetyNotification,
  UARTWordLength: UARTWordLength,
  JointAccelerationSoftLimits: JointAccelerationSoftLimits,
  DesiredSpeeds: DesiredSpeeds,
  ControlConfig_ControlModeNotification: ControlConfig_ControlModeNotification,
  JointSpeedSoftLimits: JointSpeedSoftLimits,
  ControlConfigurationEvent: ControlConfigurationEvent,
  PayloadInformation: PayloadInformation,
  TwistLinearSoftLimit: TwistLinearSoftLimit,
  ControlConfig_Position: ControlConfig_Position,
  CartesianTransform: CartesianTransform,
  TwistAngularSoftLimit: TwistAngularSoftLimit,
  ControlConfig_ControlModeInformation: ControlConfig_ControlModeInformation,
  ControlConfig_ControlMode: ControlConfig_ControlMode,
  ControlConfig_ServiceVersion: ControlConfig_ServiceVersion,
  GravityVector: GravityVector,
  CartesianReferenceFrameInfo: CartesianReferenceFrameInfo,
  AngularTwist: AngularTwist,
  LinearTwist: LinearTwist,
  KinematicLimitsList: KinematicLimitsList,
  ToolConfiguration: ToolConfiguration,
  ControlConfig_JointSpeeds: ControlConfig_JointSpeeds,
  ControlConfigurationNotification: ControlConfigurationNotification,
  KinematicLimits: KinematicLimits,
  DeviceConfig_CapSenseMode: DeviceConfig_CapSenseMode,
  DeviceConfig_CapSenseConfig: DeviceConfig_CapSenseConfig,
  FirmwareVersion: FirmwareVersion,
  RunModes: RunModes,
  SafetyInformationList: SafetyInformationList,
  SafetyThreshold: SafetyThreshold,
  ModelNumber: ModelNumber,
  SafetyConfigurationList: SafetyConfigurationList,
  CalibrationStatus: CalibrationStatus,
  DeviceConfig_ServiceVersion: DeviceConfig_ServiceVersion,
  SafetyEnable: SafetyEnable,
  CalibrationItem: CalibrationItem,
  CalibrationResult: CalibrationResult,
  CalibrationParameter_value: CalibrationParameter_value,
  PowerOnSelfTestResult: PowerOnSelfTestResult,
  DeviceType: DeviceType,
  RunMode: RunMode,
  CapSenseRegister: CapSenseRegister,
  MACAddress: MACAddress,
  DeviceConfig_SafetyLimitType: DeviceConfig_SafetyLimitType,
  RebootRqst: RebootRqst,
  SafetyInformation: SafetyInformation,
  SerialNumber: SerialNumber,
  BootloaderVersion: BootloaderVersion,
  SafetyConfiguration: SafetyConfiguration,
  SafetyStatus: SafetyStatus,
  CalibrationParameter: CalibrationParameter,
  PartNumber: PartNumber,
  Calibration: Calibration,
  IPv4Settings: IPv4Settings,
  PartNumberRevision: PartNumberRevision,
  CalibrationElement: CalibrationElement,
  DeviceHandles: DeviceHandles,
  DeviceManager_ServiceVersion: DeviceManager_ServiceVersion,
  GripperConfig_SafetyIdentifier: GripperConfig_SafetyIdentifier,
  RobotiqGripperStatusFlags: RobotiqGripperStatusFlags,
  CustomDataUnit: CustomDataUnit,
  GripperCyclic_Feedback: GripperCyclic_Feedback,
  MotorCommand: MotorCommand,
  MotorFeedback: MotorFeedback,
  GripperCyclic_Command: GripperCyclic_Command,
  GripperCyclic_MessageId: GripperCyclic_MessageId,
  GripperCyclic_ServiceVersion: GripperCyclic_ServiceVersion,
  GripperCyclic_CustomData: GripperCyclic_CustomData,
  I2CReadParameter: I2CReadParameter,
  GPIOPull: GPIOPull,
  EthernetDuplex: EthernetDuplex,
  InterconnectConfig_GPIOConfiguration: InterconnectConfig_GPIOConfiguration,
  GPIOState: GPIOState,
  GPIOValue: GPIOValue,
  InterconnectConfig_SafetyIdentifier: InterconnectConfig_SafetyIdentifier,
  I2CWriteParameter: I2CWriteParameter,
  I2CConfiguration: I2CConfiguration,
  EthernetConfiguration: EthernetConfiguration,
  EthernetSpeed: EthernetSpeed,
  I2CReadRegisterParameter: I2CReadRegisterParameter,
  InterconnectConfig_ServiceVersion: InterconnectConfig_ServiceVersion,
  EthernetDevice: EthernetDevice,
  GPIOMode: GPIOMode,
  I2CWriteRegisterParameter: I2CWriteRegisterParameter,
  EthernetDeviceIdentification: EthernetDeviceIdentification,
  GPIOIdentifier: GPIOIdentifier,
  UARTPortId: UARTPortId,
  GPIOIdentification: GPIOIdentification,
  I2CMode: I2CMode,
  I2CDeviceIdentification: I2CDeviceIdentification,
  I2CDeviceAddressing: I2CDeviceAddressing,
  I2CData: I2CData,
  I2CDevice: I2CDevice,
  I2CRegisterAddressSize: I2CRegisterAddressSize,
  InterconnectCyclic_CustomData: InterconnectCyclic_CustomData,
  InterconnectCyclic_Command_tool_command: InterconnectCyclic_Command_tool_command,
  InterconnectCyclic_Command: InterconnectCyclic_Command,
  InterconnectCyclic_Feedback: InterconnectCyclic_Feedback,
  InterconnectCyclic_Feedback_tool_feedback: InterconnectCyclic_Feedback_tool_feedback,
  InterconnectCyclic_MessageId: InterconnectCyclic_MessageId,
  InterconnectCyclic_CustomData_tool_customData: InterconnectCyclic_CustomData_tool_customData,
  InterconnectCyclic_ServiceVersion: InterconnectCyclic_ServiceVersion,
  ArmLaterality: ArmLaterality,
  VisionModuleType: VisionModuleType,
  InterfaceModuleType: InterfaceModuleType,
  CompleteProductConfiguration: CompleteProductConfiguration,
  ProductConfigurationEndEffectorType: ProductConfigurationEndEffectorType,
  WristType: WristType,
  BaseType: BaseType,
  EndEffectorType: EndEffectorType,
  ModelId: ModelId,
  VisionConfig_RotationMatrixRow: VisionConfig_RotationMatrixRow,
  SensorFocusAction: SensorFocusAction,
  TranslationVector: TranslationVector,
  Sensor: Sensor,
  SensorIdentifier: SensorIdentifier,
  FocusAction: FocusAction,
  FrameRate: FrameRate,
  IntrinsicProfileIdentifier: IntrinsicProfileIdentifier,
  IntrinsicParameters: IntrinsicParameters,
  OptionInformation: OptionInformation,
  VisionNotification: VisionNotification,
  VisionConfig_RotationMatrix: VisionConfig_RotationMatrix,
  BitRate: BitRate,
  OptionValue: OptionValue,
  Option: Option,
  SensorFocusAction_action_parameters: SensorFocusAction_action_parameters,
  VisionEvent: VisionEvent,
  SensorSettings: SensorSettings,
  DistortionCoefficients: DistortionCoefficients,
  Resolution: Resolution,
  VisionConfig_ServiceVersion: VisionConfig_ServiceVersion,
  FocusPoint: FocusPoint,
  OptionIdentifier: OptionIdentifier,
  ExtrinsicParameters: ExtrinsicParameters,
  ManualFocus: ManualFocus,
  FollowCartesianTrajectoryActionFeedback: FollowCartesianTrajectoryActionFeedback,
  FollowCartesianTrajectoryGoal: FollowCartesianTrajectoryGoal,
  FollowCartesianTrajectoryResult: FollowCartesianTrajectoryResult,
  FollowCartesianTrajectoryFeedback: FollowCartesianTrajectoryFeedback,
  FollowCartesianTrajectoryAction: FollowCartesianTrajectoryAction,
  FollowCartesianTrajectoryActionGoal: FollowCartesianTrajectoryActionGoal,
  FollowCartesianTrajectoryActionResult: FollowCartesianTrajectoryActionResult,
};
