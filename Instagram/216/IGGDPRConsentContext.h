//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGGDPRConsentContext : NSObject
{
    NSString *_entryPoint;
    NSString *_userState;
    NSString *_waterfallID;
}

- (void).cxx_destruct;
- (_Bool)isUnderBlocked;
- (_Bool)isNewUser;
- (id)waterfallID;
- (id)userState;
- (id)entryPoint;
- (id)initWithEntryPoint:(id)arg1 userState:(id)arg2 waterfallID:(id)arg3;

@end

