//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGQuestionStickerResponseSendMessageButton, IGQuestionStickerResponseShareButton, UIControl;

@interface IGQuestionStickerResponseBrowserFooterView : IGPassthroughView
{
    IGQuestionStickerResponseSendMessageButton *_sendMessageButton;
    IGQuestionStickerResponseShareButton *_shareResponseButton;
    UIControl *_deleteResponseButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *deleteResponseButton; // @synthesize deleteResponseButton=_deleteResponseButton;
@property(readonly, nonatomic) IGQuestionStickerResponseShareButton *shareResponseButton; // @synthesize shareResponseButton=_shareResponseButton;
@property(readonly, nonatomic) IGQuestionStickerResponseSendMessageButton *sendMessageButton; // @synthesize sendMessageButton=_sendMessageButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

