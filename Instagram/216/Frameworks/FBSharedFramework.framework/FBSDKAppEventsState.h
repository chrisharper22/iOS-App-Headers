//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _numSkipped;
    NSString *_tokenString;
    NSString *_appID;
    NSMutableArray *_mutableEvents;
}

+ (_Bool)supportsSecureCoding;
+ (void)setEventProcessors:(id)arg1;
+ (id)eventProcessors;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableEvents; // @synthesize mutableEvents=_mutableEvents;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) unsigned long long numSkipped; // @synthesize numSkipped=_numSkipped;
- (id)JSONStringForEventsIncludingImplicitEvents:(_Bool)arg1;
- (_Bool)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
- (_Bool)isCompatibleWithAppEventsState:(id)arg1;
@property(readonly, nonatomic, getter=areAllEventsImplicit) _Bool allEventsImplicit;
- (id)extractReceiptData;
- (void)addEvent:(id)arg1 isImplicit:(_Bool)arg2;
- (void)addEventsFromAppEventState:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *events;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1 appID:(id)arg2;

@end

