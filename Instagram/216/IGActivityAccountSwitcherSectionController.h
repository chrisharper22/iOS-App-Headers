//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGActivityAccountSwitcherConfiguration, IGUser;
@protocol IGAccountSwitching;

@interface IGActivityAccountSwitcherSectionController : IGListSectionController
{
    IGUser *_user;
    id <IGAccountSwitching> _accountSwitcher;
    IGActivityAccountSwitcherConfiguration *_configuration;
    _Bool _didAnimate;
}

- (void).cxx_destruct;
- (void)_animateCell:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUser:(id)arg1 accountSwitcher:(id)arg2;

@end

