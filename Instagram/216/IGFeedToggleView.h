//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGUsertagReviewCountListener-Protocol.h"

@class IGCounterBadge, IGFeedToggleMetrics, IGUserSession, NSMutableArray, NSString, UIButton, UIImageView;
@protocol IGFeedToggleViewDelegate;

@interface IGFeedToggleView : UIView <IGUsertagReviewCountListener>
{
    _Bool _isSelfProfile;
    IGFeedToggleMetrics *_metrics;
    UIImageView *_gridToggleIcon;
    UIButton *_gridViewButton;
    UIButton *_listViewButton;
    UIButton *_usertagsButton;
    UIImageView *_userTagsBadge;
    IGCounterBadge *_pendingUserTagsBadge;
    _Bool _userTagsBadged;
    _Bool _shouldAddLeftAndRightInsets;
    id <IGFeedToggleViewDelegate> _delegate;
    UIButton *_savedMediaButton;
    IGUserSession *_userSession;
    NSMutableArray *_buttons;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

+ (long long)height;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAddLeftAndRightInsets; // @synthesize shouldAddLeftAndRightInsets=_shouldAddLeftAndRightInsets;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) UIButton *savedMediaButton; // @synthesize savedMediaButton=_savedMediaButton;
@property(nonatomic) _Bool userTagsBadged; // @synthesize userTagsBadged=_userTagsBadged;
@property(nonatomic) __weak id <IGFeedToggleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userTagsToReviewChanged;
- (void)_switchedMode:(id)arg1;
- (void)setDefaultFeedMode:(long long)arg1;
- (void)selectButton:(long long)arg1;
- (void)setButtonEnabled:(_Bool)arg1 forButton:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 buttonOptions:(long long)arg2 isSelfProfile:(_Bool)arg3 metrics:(id)arg4 shouldAddLeftAndRightInsets:(_Bool)arg5 userSession:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

