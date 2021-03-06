//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGImageView, IGLabel, IGTextButton, NSString;

@interface IGPinnedCommentsConfirmationViewController : IGViewController <IGGestureHandler>
{
    CDUnknownBlockType _confirmPinBlock;
    IGImageView *_thumbnailImageView;
    IGLabel *_titleLabel;
    IGLabel *_descriptionLabel;
    IGTextButton *_pinCommentButton;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapPinCommentButton;
- (void)_setUpDescriptionLabel;
- (void)_setUpTitleLabel;
- (void)_setUpThumbnailImageView;
- (void)_setUpPinCommentButton;
- (double)getEstimatedContentHeight;
- (id)initWithUserSession:(id)arg1 confirmPinBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

