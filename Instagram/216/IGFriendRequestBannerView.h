//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFriendStatusReceivedListener-Protocol.h"

@class IGCoreTextView, IGTextButton, IGUser, IGUserSession, NSString, UILabel;
@protocol IGFriendRequestBannerViewDelegate;

@interface IGFriendRequestBannerView : UICollectionViewCell <IGFriendStatusReceivedListener>
{
    IGUserSession *_userSession;
    IGUser *_user;
    IGTextButton *_approveButton;
    IGTextButton *_ignoreButton;
    UILabel *_headerFollowRequestLabel;
    IGCoreTextView *_footerFollowRequestView;
    long long _followRequestPosition;
    NSString *_analyticsModule;
    _Bool _isRequestDealtWith;
    id <IGFriendRequestBannerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRequestDealtWith; // @synthesize isRequestDealtWith=_isRequestDealtWith;
@property(nonatomic) __weak id <IGFriendRequestBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSubviewsWithFooterFollowRequest;
- (void)_layoutSubviewsWithHeaderFollowRequest;
- (void)layoutSubviews;
- (void)_hide;
- (void)_show;
- (void)_buttonTappedWithAction:(long long)arg1;
- (void)_onIgnoreButtonTapped:(id)arg1;
- (void)_onApproveButtonTapped:(id)arg1;
- (void)_updateContentString:(id)arg1;
- (id)_getFooterFollowRequestContentString;
- (void)bulkFriendStatusesReceivedForUsers:(id)arg1;
- (void)friendStatusReceiverForUser:(id)arg1;
- (void)configureWithUser:(id)arg1 userSession:(id)arg2 followRequestPosition:(long long)arg3 analyticsModule:(id)arg4;
- (void)_setUpFooterFollowRequestView;
- (void)_setUpHeaderFollowRequestLabel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

