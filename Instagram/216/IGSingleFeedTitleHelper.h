//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGSingleFeedTitleHelper : NSObject
{
    IGUserSession *_userSession;
    NSString *_adPreviewTitle;
}

- (void).cxx_destruct;
- (id)_singleFeedTitleForPromotion;
- (_Bool)_isPostPromotionFromCurrentUser:(id)arg1;
- (id)singleFeedTitleFromPost:(id)arg1;
- (id)initWithUserSession:(id)arg1 adPreviewTitle:(id)arg2;

@end

