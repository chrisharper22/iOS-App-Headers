//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCommentSectionViewModel, UIButton;
@protocol IGCoreTextLinkHandler, IGProfilePictureImageViewDelegate;

@protocol IGCommentContentViewProtocol <NSObject>
+ (double)profilePictureColumnWidthWithUseInlineStyle:(_Bool)arg1 useFacebookProfileImageSize:(_Bool)arg2;
+ (double)heightForCommentViewModel:(IGCommentSectionViewModel *)arg1 useInlineStyle:(_Bool)arg2 removeLikeButtonPadding:(_Bool)arg3 width:(double)arg4;
- (UIButton *)likeButton;
- (void)updateViewWithCommentViewModel:(IGCommentSectionViewModel *)arg1;
- (void)setProfilePicViewDelegate:(id <IGProfilePictureImageViewDelegate>)arg1;
- (void)setShowFanClubBadge:(_Bool)arg1;
- (void)setCoreTextLinkHandler:(id <IGCoreTextLinkHandler>)arg1;
@end

