//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGSponsoredSupportConfiguration, IGUserSession;
@protocol IGSponsoredInfoProviding;

@interface IGPBIAProxyProfileFetcher : NSObject
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
}

- (void).cxx_destruct;
- (void)fetchPBIAProxyProfileDataOnSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 sponsoredInfoProvider:(id)arg3 sponsoredSupportConfiguration:(id)arg4;

@end

