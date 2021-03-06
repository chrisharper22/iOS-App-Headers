//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGDirectAnimatedMediaMessageViewModel, IGDirectArchivedStoryViewModel, IGDirectGradient, IGDirectMessageQuickReaction, IGDirectTextMessageBubbleViewModel, IGGiphyGIFModel, IGImageSpecifier, IGStyledString, IGUser, NSAttributedString, NSDate, NSString;
@protocol IGContentGateableMediaItem;

@protocol IGDirectExpiringReshareMessageViewModelProtocol <NSObject>
- (double)imageCornerRadius;
- (double)contentHeight;
- (NSDate *)startDate;
- (id <IGContentGateableMediaItem>)media;
- (IGUser *)reelSender;
- (IGDirectGradient *)addToStoryInThumbnailBackgroundGradient;
- (IGGiphyGIFModel *)giphyModel;
- (IGDirectAnimatedMediaMessageViewModel *)animatedMediaMessageViewModel;
- (IGDirectArchivedStoryViewModel *)archivedStoryViewModel;
- (_Bool)showFalseInformationView;
- (_Bool)showSensitivityView;
- (_Bool)canRepostOnMention;
- (_Bool)hasEndedWithoutIGTV;
- (_Bool)liveViewExpiredDMEnabled;
- (_Bool)hasEnded;
- (_Bool)isExpired;
- (long long)liveViewerCount;
- (IGUser *)liveBroadcaster;
- (IGDirectMessageQuickReaction *)quickReaction;
- (IGStyledString *)placeholderText;
- (double)cellWidth;
- (IGDirectTextMessageBubbleViewModel *)textBubbleViewModel;
- (struct CGSize)headerSize;
- (struct CGSize)imageSize;
- (IGImageSpecifier *)imageSpecifier;
- (NSString *)CTALabelText;
- (NSAttributedString *)headerText;
@end

