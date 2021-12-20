//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBDateFormatterResult : NSObject
{
    NSString *_string;
    NSString *_accessibleString;
    long long _rule;
}

+ (id)compositeFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
+ (id)postFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
+ (id)preFormatResultWithString:(id)arg1 accessibleString:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long rule; // @synthesize rule=_rule;
@property(readonly, copy, nonatomic) NSString *accessibleString; // @synthesize accessibleString=_accessibleString;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithString:(id)arg1 accessibleString:(id)arg2 rule:(long long)arg3;

@end

