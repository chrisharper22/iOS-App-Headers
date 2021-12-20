//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@class IGMedia, IGShareToCoWatchViewModel, IGUserSession, NSString;

@interface IGShareToCoWatchSectionController : IGListGenericSectionController
{
    IGShareToCoWatchViewModel *_viewModel;
    NSString *_postItemPk;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGMedia *_media;
    NSString *_surface;
}

- (void).cxx_destruct;
- (void)_logCoWatchItemTappedInShareSheet;
- (void)_logCoWatchItemImpressionInShareSheet;
- (void)_logCoWatchActionInShareSheet:(int)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 postItemPk:(id)arg3 analyticsModule:(id)arg4 surface:(id)arg5;

@end
