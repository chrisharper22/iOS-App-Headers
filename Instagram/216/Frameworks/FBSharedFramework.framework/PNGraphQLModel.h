//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBFragmentModelProtocol-Protocol.h>

@class NSString, PNPandoTree;

@interface PNGraphQLModel : NSObject <FBFragmentModelProtocol>
{
    PNPandoTree *_tree;
}

+ (id)fromTree:(id)arg1;
- (void).cxx_destruct;
- (void)publishToConsistency:(id)arg1 lambda:(CDUnknownBlockType)arg2 fullConsistency:(_Bool)arg3;
- (void)publishToConsistency:(id)arg1 fullConsistency:(_Bool)arg2;
- (void)publishToConsistency:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)maybeUpdateActiveFields;
- (_Bool)isFulfilled:(id)arg1;
- (_Bool)hasBooleanVariable:(id)arg1;
- (_Bool)booleanVariable:(id)arg1;
- (_Bool)hasFieldValue:(id)arg1;
- (id)graphQLTypeName;
- (_Bool)isInstanceOfInterfaceOrUnionGraphQLType:(id)arg1;
- (_Bool)isInstanceOfConcreteGraphQLType:(id)arg1;
- (id)initWithTree:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

