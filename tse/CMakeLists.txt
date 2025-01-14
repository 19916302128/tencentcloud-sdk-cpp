#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tse_public_header
  include/tencentcloud/tse/v20201207/TseClient.h
  )

set(tse_public_header_model
  include/tencentcloud/tse/v20201207/model/DescribeNacosReplicasRequest.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/ApolloEnvParam.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayBalancedService.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesResponse.h
  include/tencentcloud/tse/v20201207/model/GatewayInstanceSchemeAndPorts.h
  include/tencentcloud/tse/v20201207/model/QpsThreshold.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.h
  include/tencentcloud/tse/v20201207/model/VpcInfo.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleResponse.h
  include/tencentcloud/tse/v20201207/model/KongServicePreview.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/NacosServerInterface.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRequest.h
  include/tencentcloud/tse/v20201207/model/ExternalRedis.h
  include/tencentcloud/tse/v20201207/model/EnvAddressInfo.h
  include/tencentcloud/tse/v20201207/model/InstanceTagInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesRequest.h
  include/tencentcloud/tse/v20201207/model/NacosReplica.h
  include/tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessRequest.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleResponse.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRequest.h
  include/tencentcloud/tse/v20201207/model/KVPair.h
  include/tencentcloud/tse/v20201207/model/DeleteEngineResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasRequest.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayPortsResponse.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteResponse.h
  include/tencentcloud/tse/v20201207/model/ServiceGovernanceInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosReplicasResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/CloudAPIGatewayCanaryRuleList.h
  include/tencentcloud/tse/v20201207/model/KongRoutePreview.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayRateLimitDetail.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeInstanceRegionInfo.h
  include/tencentcloud/tse/v20201207/model/KongTarget.h
  include/tencentcloud/tse/v20201207/model/EngineRegionInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesResponse.h
  include/tencentcloud/tse/v20201207/model/KVMapping.h
  include/tencentcloud/tse/v20201207/model/RateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRequest.h
  include/tencentcloud/tse/v20201207/model/EnvInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceRequest.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessResponse.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/ListFilter.h
  include/tencentcloud/tse/v20201207/model/DeleteEngineRequest.h
  include/tencentcloud/tse/v20201207/model/ZookeeperReplica.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesResponse.h
  include/tencentcloud/tse/v20201207/model/SREInstance.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNode.h
  include/tencentcloud/tse/v20201207/model/DescribeGatewayInstancePortResult.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesResponse.h
  include/tencentcloud/tse/v20201207/model/Filter.h
  include/tencentcloud/tse/v20201207/model/PolarisLimiterAddress.h
  include/tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceResponse.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRequest.h
  include/tencentcloud/tse/v20201207/model/KongServices.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleRequest.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesRequest.h
  include/tencentcloud/tse/v20201207/model/CreateEngineResponse.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResult.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRule.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesRequest.h
  include/tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h
  include/tencentcloud/tse/v20201207/model/ZookeeperServerInterface.h
  include/tencentcloud/tse/v20201207/model/BoundK8SInfo.h
  include/tencentcloud/tse/v20201207/model/KongUpstreamInfo.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h
  include/tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitRequest.h
  include/tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasResponse.h
  include/tencentcloud/tse/v20201207/model/CreateEngineRequest.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleRequest.h
  include/tencentcloud/tse/v20201207/model/KongServiceRouteList.h
  include/tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h
  include/tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitResponse.h
  include/tencentcloud/tse/v20201207/model/EngineAdmin.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesRequest.h
  include/tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleResponse.h
  include/tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayPortsRequest.h
  include/tencentcloud/tse/v20201207/model/KongServiceDetail.h
  )

set(tse_src
  src/v20201207/TseClient.cpp
  src/v20201207/model/DescribeNacosReplicasRequest.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayServiceResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitResponse.cpp
  src/v20201207/model/ApolloEnvParam.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitRequest.cpp
  src/v20201207/model/CloudNativeAPIGatewayBalancedService.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayRouteRequest.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayServicesResponse.cpp
  src/v20201207/model/GatewayInstanceSchemeAndPorts.cpp
  src/v20201207/model/QpsThreshold.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayServiceResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.cpp
  src/v20201207/model/VpcInfo.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleResponse.cpp
  src/v20201207/model/KongServicePreview.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitRequest.cpp
  src/v20201207/model/NacosServerInterface.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayServiceRequest.cpp
  src/v20201207/model/ExternalRedis.cpp
  src/v20201207/model/EnvAddressInfo.cpp
  src/v20201207/model/InstanceTagInfo.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayServicesRequest.cpp
  src/v20201207/model/NacosReplica.cpp
  src/v20201207/model/UpdateEngineInternetAccessRequest.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleResponse.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayRouteRequest.cpp
  src/v20201207/model/KVPair.cpp
  src/v20201207/model/DeleteEngineResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayRoutesResponse.cpp
  src/v20201207/model/DescribeZookeeperReplicasRequest.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayServiceResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayRouteResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayPortsResponse.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitRequest.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayRouteResponse.cpp
  src/v20201207/model/ServiceGovernanceInfo.cpp
  src/v20201207/model/DescribeNacosReplicasResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitRequest.cpp
  src/v20201207/model/CloudAPIGatewayCanaryRuleList.cpp
  src/v20201207/model/KongRoutePreview.cpp
  src/v20201207/model/CloudNativeAPIGatewayRateLimitDetail.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayRouteResponse.cpp
  src/v20201207/model/DescribeInstanceRegionInfo.cpp
  src/v20201207/model/KongTarget.cpp
  src/v20201207/model/EngineRegionInfo.cpp
  src/v20201207/model/DescribeNacosServerInterfacesResponse.cpp
  src/v20201207/model/KVMapping.cpp
  src/v20201207/model/RateLimitResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayServiceRequest.cpp
  src/v20201207/model/EnvInfo.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitRequest.cpp
  src/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceRequest.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitResponse.cpp
  src/v20201207/model/UpdateEngineInternetAccessResponse.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitRequest.cpp
  src/v20201207/model/ListFilter.cpp
  src/v20201207/model/DeleteEngineRequest.cpp
  src/v20201207/model/ZookeeperReplica.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesResponse.cpp
  src/v20201207/model/SREInstance.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitResponse.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitRequest.cpp
  src/v20201207/model/CloudNativeAPIGatewayNode.cpp
  src/v20201207/model/DescribeGatewayInstancePortResult.cpp
  src/v20201207/model/DescribeZookeeperServerInterfacesResponse.cpp
  src/v20201207/model/Filter.cpp
  src/v20201207/model/PolarisLimiterAddress.cpp
  src/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceResponse.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayServiceRequest.cpp
  src/v20201207/model/KongServices.cpp
  src/v20201207/model/DescribeZookeeperServerInterfacesRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitResponse.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleRequest.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayRouteRequest.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayRoutesRequest.cpp
  src/v20201207/model/CreateEngineResponse.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayNodesResult.cpp
  src/v20201207/model/CloudNativeAPIGatewayCanaryRule.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitResponse.cpp
  src/v20201207/model/DescribeNacosServerInterfacesRequest.cpp
  src/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.cpp
  src/v20201207/model/DescribeSREInstancesResponse.cpp
  src/v20201207/model/ZookeeperServerInterface.cpp
  src/v20201207/model/BoundK8SInfo.cpp
  src/v20201207/model/KongUpstreamInfo.cpp
  src/v20201207/model/DescribeSREInstancesRequest.cpp
  src/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitRequest.cpp
  src/v20201207/model/DescribeZookeeperReplicasResponse.cpp
  src/v20201207/model/CreateEngineRequest.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleRequest.cpp
  src/v20201207/model/KongServiceRouteList.cpp
  src/v20201207/model/DescribeSREInstanceAccessAddressRequest.cpp
  src/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitResponse.cpp
  src/v20201207/model/EngineAdmin.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesRequest.cpp
  src/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleResponse.cpp
  src/v20201207/model/DescribeCloudNativeAPIGatewayPortsRequest.cpp
  src/v20201207/model/KongServiceDetail.cpp
  )

set(tse_include
    include/tencentcloud/tse
  )

add_library(tse ${LIB_TYPE}
  ${tse_public_header}
  ${tse_public_header_model}
  ${tse_src})

set_target_properties(tse
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tse
  )

target_include_directories(tse
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tse
  core)

#install(FILES ${tse_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207)
#install(FILES ${tse_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tse/v20201207/model)
install(DIRECTORY ${tse_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tse
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
