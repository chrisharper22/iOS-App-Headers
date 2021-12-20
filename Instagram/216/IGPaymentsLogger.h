//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGPaymentsLogger : NSObject
{
    NSString *_entryPoint;
    NSString *_waterfallID;
    IGUserSession *_userSession;
}

+ (id)loggerWithEntryPoint:(id)arg1 userSession:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *waterfallID; // @synthesize waterfallID=_waterfallID;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void)_logEvent:(id)arg1 additionalFields:(id)arg2;
- (void)didTapEntryPoint;
- (id)_initWithEntryPoint:(id)arg1 userSession:(id)arg2;

@end

