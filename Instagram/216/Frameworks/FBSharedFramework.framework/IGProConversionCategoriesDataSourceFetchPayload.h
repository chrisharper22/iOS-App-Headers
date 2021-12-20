//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGUserSessionPayload-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary, NSString;
@protocol IGGraphQLParsing;

@interface IGProConversionCategoriesDataSourceFetchPayload : FBValueObject <IGUserSessionPayload, NSCopying, NSCoding>
{
    NSString *_queryId;
    NSDictionary *_queryParams;
    unsigned long long _schemaType;
    id <IGGraphQLParsing> _parser;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGGraphQLParsing> parser; // @synthesize parser=_parser;
@property(readonly, nonatomic) unsigned long long schemaType; // @synthesize schemaType=_schemaType;
@property(readonly, copy, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(readonly, copy, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
- (id)initWithQueryId:(id)arg1 queryParams:(id)arg2 schemaType:(unsigned long long)arg3 parser:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

