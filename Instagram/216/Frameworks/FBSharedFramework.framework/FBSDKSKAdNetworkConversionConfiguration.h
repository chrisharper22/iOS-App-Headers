//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface FBSDKSKAdNetworkConversionConfiguration : NSObject
{
    long long _timerBuckets;
    double _timerInterval;
    long long _cutoffTime;
    NSString *_defaultCurrency;
    NSArray *_conversionValueRules;
    NSSet *_eventSet;
    NSSet *_currencySet;
}

+ (id)parseRules:(id)arg1;
+ (id)getCurrencySetFromRules:(id)arg1;
+ (id)getEventSetFromRules:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *currencySet; // @synthesize currencySet=_currencySet;
@property(readonly, copy, nonatomic) NSSet *eventSet; // @synthesize eventSet=_eventSet;
@property(readonly, copy, nonatomic) NSArray *conversionValueRules; // @synthesize conversionValueRules=_conversionValueRules;
@property(readonly, copy, nonatomic) NSString *defaultCurrency; // @synthesize defaultCurrency=_defaultCurrency;
@property(readonly, nonatomic) long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
@property(readonly, nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(readonly, nonatomic) long long timerBuckets; // @synthesize timerBuckets=_timerBuckets;
- (id)initWithJSON:(id)arg1;

@end

