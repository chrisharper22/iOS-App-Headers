//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGContactUserLogEvent : NSObject
{
    NSString *_eventName;
    NSString *_targetUserID;
    NSString *_pk;
    long long _contactButtonOptionType;
    NSString *_mediaAttribution;
    NSString *_trackingToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(copy, nonatomic) NSString *mediaAttribution; // @synthesize mediaAttribution=_mediaAttribution;
@property(nonatomic) long long contactButtonOptionType; // @synthesize contactButtonOptionType=_contactButtonOptionType;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSString *targetUserID; // @synthesize targetUserID=_targetUserID;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 targetUserID:(id)arg2 pk:(id)arg3;

@end

