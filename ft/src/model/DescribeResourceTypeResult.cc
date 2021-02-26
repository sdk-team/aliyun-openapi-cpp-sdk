/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ft/model/DescribeResourceTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

DescribeResourceTypeResult::DescribeResourceTypeResult() :
	ServiceResult()
{}

DescribeResourceTypeResult::DescribeResourceTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceTypeResult::~DescribeResourceTypeResult()
{}

void DescribeResourceTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStatesNode = value["States"]["State"];
	for (auto valueStatesState : allStatesNode)
	{
		State statesObject;
		if(!valueStatesState["Code"].isNull())
			statesObject.code = valueStatesState["Code"].asString();
		if(!valueStatesState["Description"].isNull())
			statesObject.description = valueStatesState["Description"].asString();
		states_.push_back(statesObject);
	}
	auto schemaNode = value["Schema"];
	if(!schemaNode["Ref"].isNull())
		schema_.ref = schemaNode["Ref"].asString();
	if(!schemaNode["Title"].isNull())
		schema_.title = schemaNode["Title"].asString();
	if(!schemaNode["Type"].isNull())
		schema_.type = schemaNode["Type"].asString();
	if(!schemaNode["Description"].isNull())
		schema_.description = schemaNode["Description"].asString();
	if(!schemaNode["Properties"].isNull())
		schema_.properties = schemaNode["Properties"].asString();
	if(!schemaNode["ItemName"].isNull())
		schema_.itemName = schemaNode["ItemName"].asString();
	if(!schemaNode["Items"].isNull())
		schema_.items = schemaNode["Items"].asString();
	auto operationAPINode = value["OperationAPI"];
	auto allCreateAPIsNode = operationAPINode["CreateAPIs"]["APIIdentity"];
	for (auto operationAPINodeCreateAPIsAPIIdentity : allCreateAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeCreateAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeCreateAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeCreateAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeCreateAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeCreateAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeCreateAPIsAPIIdentity["APIName"].asString();
		operationAPI_.createAPIs.push_back(aPIIdentityObject);
	}
	auto allGetAPIsNode = operationAPINode["GetAPIs"]["APIIdentity"];
	for (auto operationAPINodeGetAPIsAPIIdentity : allGetAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeGetAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeGetAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeGetAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeGetAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeGetAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeGetAPIsAPIIdentity["APIName"].asString();
		operationAPI_.getAPIs.push_back(aPIIdentityObject);
	}
	auto allListAPIsNode = operationAPINode["ListAPIs"]["APIIdentity"];
	for (auto operationAPINodeListAPIsAPIIdentity : allListAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeListAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeListAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeListAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeListAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeListAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeListAPIsAPIIdentity["APIName"].asString();
		operationAPI_.listAPIs.push_back(aPIIdentityObject);
	}
	auto allUpdateAPIsNode = operationAPINode["UpdateAPIs"]["APIIdentity"];
	for (auto operationAPINodeUpdateAPIsAPIIdentity : allUpdateAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeUpdateAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeUpdateAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeUpdateAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeUpdateAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeUpdateAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeUpdateAPIsAPIIdentity["APIName"].asString();
		operationAPI_.updateAPIs.push_back(aPIIdentityObject);
	}
	auto allDeleteAPIsNode = operationAPINode["DeleteAPIs"]["APIIdentity"];
	for (auto operationAPINodeDeleteAPIsAPIIdentity : allDeleteAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeDeleteAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeDeleteAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeDeleteAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeDeleteAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeDeleteAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeDeleteAPIsAPIIdentity["APIName"].asString();
		operationAPI_.deleteAPIs.push_back(aPIIdentityObject);
	}
	auto allEstablishRelationAPIsNode = operationAPINode["EstablishRelationAPIs"]["APIIdentity"];
	for (auto operationAPINodeEstablishRelationAPIsAPIIdentity : allEstablishRelationAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeEstablishRelationAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeEstablishRelationAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeEstablishRelationAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeEstablishRelationAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeEstablishRelationAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeEstablishRelationAPIsAPIIdentity["APIName"].asString();
		operationAPI_.establishRelationAPIs.push_back(aPIIdentityObject);
	}
	auto allDestroyRelationAPIsNode = operationAPINode["DestroyRelationAPIs"]["APIIdentity"];
	for (auto operationAPINodeDestroyRelationAPIsAPIIdentity : allDestroyRelationAPIsNode)
	{
		OperationAPI::APIIdentity aPIIdentityObject;
		if(!operationAPINodeDestroyRelationAPIsAPIIdentity["APIGroup"].isNull())
			aPIIdentityObject.aPIGroup = operationAPINodeDestroyRelationAPIsAPIIdentity["APIGroup"].asString();
		if(!operationAPINodeDestroyRelationAPIsAPIIdentity["APIVersion"].isNull())
			aPIIdentityObject.aPIVersion = operationAPINodeDestroyRelationAPIsAPIIdentity["APIVersion"].asString();
		if(!operationAPINodeDestroyRelationAPIsAPIIdentity["APIName"].isNull())
			aPIIdentityObject.aPIName = operationAPINodeDestroyRelationAPIsAPIIdentity["APIName"].asString();
		operationAPI_.destroyRelationAPIs.push_back(aPIIdentityObject);
	}
	auto resourceTypeAttributeMappingsNode = value["ResourceTypeAttributeMappings"];
	if(!resourceTypeAttributeMappingsNode["PrePaidValue"].isNull())
		resourceTypeAttributeMappings_.prePaidValue = resourceTypeAttributeMappingsNode["PrePaidValue"].asString();
	if(!resourceTypeAttributeMappingsNode["EnableAttributeMapping"].isNull())
		resourceTypeAttributeMappings_.enableAttributeMapping = resourceTypeAttributeMappingsNode["EnableAttributeMapping"].asString();
	auto operationGetNode = resourceTypeAttributeMappingsNode["OperationGet"];
	auto allApiInfosNode = operationGetNode["ApiInfos"]["ResourceTypeOperationDetail"];
	for (auto operationGetNodeApiInfosResourceTypeOperationDetail : allApiInfosNode)
	{
		ResourceTypeAttributeMappings::OperationGet::ResourceTypeOperationDetail resourceTypeOperationDetailObject;
		if(!operationGetNodeApiInfosResourceTypeOperationDetail["GatewaySource"].isNull())
			resourceTypeOperationDetailObject.gatewaySource = operationGetNodeApiInfosResourceTypeOperationDetail["GatewaySource"].asString();
		if(!operationGetNodeApiInfosResourceTypeOperationDetail["GatewayProduct"].isNull())
			resourceTypeOperationDetailObject.gatewayProduct = operationGetNodeApiInfosResourceTypeOperationDetail["GatewayProduct"].asString();
		if(!operationGetNodeApiInfosResourceTypeOperationDetail["GatewayVersion"].isNull())
			resourceTypeOperationDetailObject.gatewayVersion = operationGetNodeApiInfosResourceTypeOperationDetail["GatewayVersion"].asString();
		if(!operationGetNodeApiInfosResourceTypeOperationDetail["ApiName"].isNull())
			resourceTypeOperationDetailObject.apiName = operationGetNodeApiInfosResourceTypeOperationDetail["ApiName"].asString();
		if(!operationGetNodeApiInfosResourceTypeOperationDetail["AttributeAsyncDetections"].isNull())
			resourceTypeOperationDetailObject.attributeAsyncDetections = operationGetNodeApiInfosResourceTypeOperationDetail["AttributeAsyncDetections"].asString();
		auto requiredAttributeMappingsNode = value["RequiredAttributeMappings"];
		if(!requiredAttributeMappingsNode["IdMappings"].isNull())
			resourceTypeOperationDetailObject.requiredAttributeMappings.idMappings = requiredAttributeMappingsNode["IdMappings"].asString();
		resourceTypeAttributeMappings_.operationGet.apiInfos.push_back(resourceTypeOperationDetailObject);
	}
	if(!value["Product"].isNull())
		product_ = value["Product"].asString();
	if(!value["ResourceTypeCode"].isNull())
		resourceTypeCode_ = value["ResourceTypeCode"].asString();
	if(!value["ResourceTypeVersion"].isNull())
		resourceTypeVersion_ = value["ResourceTypeVersion"].asString();
	if(!value["Title"].isNull())
		title_ = value["Title"].asString();
	if(!value["UniqueIdentifier"].isNull())
		uniqueIdentifier_ = value["UniqueIdentifier"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ResourceIdField"].isNull())
		resourceIdField_ = value["ResourceIdField"].asString();
	if(!value["Definitions"].isNull())
		definitions_ = value["Definitions"].asString();

}

std::vector<DescribeResourceTypeResult::State> DescribeResourceTypeResult::getStates()const
{
	return states_;
}

DescribeResourceTypeResult::ResourceTypeAttributeMappings DescribeResourceTypeResult::getResourceTypeAttributeMappings()const
{
	return resourceTypeAttributeMappings_;
}

std::string DescribeResourceTypeResult::getResourceTypeVersion()const
{
	return resourceTypeVersion_;
}

std::string DescribeResourceTypeResult::getUniqueIdentifier()const
{
	return uniqueIdentifier_;
}

std::string DescribeResourceTypeResult::getDescription()const
{
	return description_;
}

DescribeResourceTypeResult::Schema DescribeResourceTypeResult::getSchema()const
{
	return schema_;
}

DescribeResourceTypeResult::OperationAPI DescribeResourceTypeResult::getOperationAPI()const
{
	return operationAPI_;
}

std::string DescribeResourceTypeResult::getDefinitions()const
{
	return definitions_;
}

std::string DescribeResourceTypeResult::getResourceTypeCode()const
{
	return resourceTypeCode_;
}

std::string DescribeResourceTypeResult::getProduct()const
{
	return product_;
}

std::string DescribeResourceTypeResult::getTitle()const
{
	return title_;
}

std::string DescribeResourceTypeResult::getResourceIdField()const
{
	return resourceIdField_;
}

