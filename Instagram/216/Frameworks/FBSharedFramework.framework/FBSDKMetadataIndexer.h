//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKMetadataIndexing-Protocol.h>

@class NSMutableDictionary;
@protocol FBSDKUserDataPersisting, OS_dispatch_queue;

@interface FBSDKMetadataIndexer : NSObject <FBSDKMetadataIndexing>
{
    NSMutableDictionary *_rules;
    NSMutableDictionary *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <FBSDKUserDataPersisting> _userDataStore;
    Class _swizzler;
}

+ (id)shared;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class swizzler; // @synthesize swizzler=_swizzler;
@property(readonly, nonatomic) id <FBSDKUserDataPersisting> userDataStore; // @synthesize userDataStore=_userDataStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableDictionary *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSMutableDictionary *rules; // @synthesize rules=_rules;
- (id)pruneValue:(id)arg1 forKey:(id)arg2;
- (id)normalizeValue:(id)arg1;
- (id)normalizeField:(id)arg1;
- (_Bool)checkMetadataText:(id)arg1 matchRuleV:(id)arg2;
- (_Bool)checkMetadataHint:(id)arg1 matchRuleK:(id)arg2;
- (_Bool)checkMetadataLabels:(id)arg1 matchRuleK:(id)arg2;
- (void)checkAndAppendData:(id)arg1 forKey:(id)arg2;
- (void)getMetadataWithText:(id)arg1 placeholder:(id)arg2 labels:(id)arg3 secureTextEntry:(_Bool)arg4 inputType:(long long)arg5;
- (long long)getKeyboardType:(id)arg1;
- (_Bool)checkSecureTextEntry:(id)arg1;
- (id)getLabelsOfView:(id)arg1;
- (id)getSiblingViewsOfView:(id)arg1;
- (void)setupMetadataIndexing;
- (void)constructRules:(id)arg1;
- (void)initStore;
- (void)setupWithRules:(id)arg1;
- (void)enable;
- (id)initWithUserDataStore:(id)arg1 swizzler:(Class)arg2;

@end

