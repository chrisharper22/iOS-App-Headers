//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FBSDKSKAdNetworkRule : NSObject
{
    long long _conversionValue;
    NSArray *_events;
}

+ (id)parseEvents:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) long long conversionValue; // @synthesize conversionValue=_conversionValue;
- (_Bool)isMatchedWithRecordedEvents:(id)arg1 recordedValues:(id)arg2;
- (id)initWithJSON:(id)arg1;

@end

