//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGCookieOperationContext : NSObject
{
    NSArray *_addCookies;
    long long _type;
}

+ (id)addCookies:(id)arg1;
+ (id)deleteAllCookies;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)matchDeleteAllCookies:(CDUnknownBlockType)arg1 addCookies:(CDUnknownBlockType)arg2;
- (id)_initWithType:(long long)arg1 addCookies:(id)arg2;

@end

