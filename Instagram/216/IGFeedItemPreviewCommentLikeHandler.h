//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSponsoredSupportConfiguration, IGUserSession, NSString;

@interface IGFeedItemPreviewCommentLikeHandler : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

- (void).cxx_destruct;
- (void)handleCommentLikeForComment:(id)arg1 media:(id)arg2 likeButton:(id)arg3;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 sponsoredSupportConfiguration:(id)arg3;

@end

