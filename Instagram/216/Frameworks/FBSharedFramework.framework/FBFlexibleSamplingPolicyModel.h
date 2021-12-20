//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSDictionary, NSSet;

@interface FBFlexibleSamplingPolicyModel : FBValueObject <NSCopying, NSCoding>
{
    NSSet *_eventBlacklist;
    NSDictionary *_frequencyConfig;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *frequencyConfig; // @synthesize frequencyConfig=_frequencyConfig;
@property(readonly, copy, nonatomic) NSSet *eventBlacklist; // @synthesize eventBlacklist=_eventBlacklist;
- (id)initWithEventBlacklist:(id)arg1 frequencyConfig:(id)arg2;

@end
