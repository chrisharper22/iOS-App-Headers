//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGFanClubInsightsRequestSender : NSObject
{
    NSString *_fanClubId;
    NSString *_userPk;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_fanClubInsightsModelFromResponse:(id)arg1;
- (void)sendRequestWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithFanClubId:(id)arg1 userPk:(id)arg2 userSession:(id)arg3;

@end

