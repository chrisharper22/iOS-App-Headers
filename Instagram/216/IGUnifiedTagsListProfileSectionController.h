//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGUnifiedTagsListProfileListItemViewProviderDelegate-Protocol.h"

@class IGMedia, IGSponsoredSupportConfiguration, IGUnifiedTagsListLogger, IGUnifiedTagsListProfileListItemViewModel, IGUserSession, NSString;
@protocol IGFeedTagsProvider;

@interface IGUnifiedTagsListProfileSectionController : IGListSectionController <IGUnifiedTagsListProfileListItemViewProviderDelegate>
{
    IGUserSession *_userSession;
    IGMedia *_media;
    IGUnifiedTagsListLogger *_logger;
    NSString *_analyticsModule;
    IGUnifiedTagsListProfileListItemViewModel *_viewModel;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    id <IGFeedTagsProvider> _feedTagsProvider;
}

- (void).cxx_destruct;
- (id)_loggableItem;
- (void)_logUserTapped:(id)arg1;
- (void)_presentUserTagActions;
- (void)_navigateToUserProfile:(id)arg1;
- (void)profileListItemViewProvider:(id)arg1 followButtonWasTappedWithAction:(long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 feedTagsProvider:(id)arg3 logger:(id)arg4 sponsoredSupportConfiguration:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

