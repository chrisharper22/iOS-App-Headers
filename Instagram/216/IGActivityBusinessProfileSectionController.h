//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGActivityStickyCellDelegate-Protocol.h"

@class IGActivityStickyBusinessReminderModel, IGUserSession, NSString;
@protocol IGActivityBusinessProfileReminderSectionControllerDelegate;

@interface IGActivityBusinessProfileSectionController : IGListSectionController <IGActivityStickyCellDelegate>
{
    id <IGActivityBusinessProfileReminderSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
    IGActivityStickyBusinessReminderModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGActivityStickyBusinessReminderModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGActivityBusinessProfileReminderSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapHideHideButton:(id)arg1;
- (_Bool)shouldShowHideButton:(id)arg1;
- (void)_handleBusinessProfileReminderAction;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)_configureCell:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

