//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class IGCustomTextLayoutManager, IGMedia, IGStoryAdTextModel, IGUserSession, NSAttributedString, NSString, UITextView;
@protocol IGSponsoredInfoProviding, IGStoryAdsTextManagerDelegate;

@interface IGStoryAdsTextManager : NSObject <UITextViewDelegate, UIGestureRecognizerDelegate>
{
    IGUserSession *_userSession;
    id <IGStoryAdsTextManagerDelegate> _delegate;
    IGMedia *_media;
    id <IGSponsoredInfoProviding> _sponsoredInfoProvider;
    unsigned long long _mediaLayoutType;
    IGCustomTextLayoutManager *_headlineLayoutManager;
    IGCustomTextLayoutManager *_captionLayoutManager;
    IGStoryAdTextModel *_captionModel;
    IGStoryAdTextModel *_headlineModel;
    long long _fullCaptionLineCount;
    NSAttributedString *_truncatedCaptionString;
    NSAttributedString *_fullCaptionString;
    UITextView *_headline;
    UITextView *_caption;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITextView *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) UITextView *headline; // @synthesize headline=_headline;
- (void)_didSwipeDownOnCaption:(id)arg1;
- (void)_captionTextTapped:(id)arg1;
- (void)_didLongPressCaption:(id)arg1;
- (id)_firstSentenceCaptionStringWithDefaultCaptionString:(id)arg1;
- (id)_truncatedCaptionStringWithFullCaptionString:(id)arg1 truncatedToNumberOfLines:(long long)arg2 width:(double)arg3;
- (double)_captionWidthOnCanvas;
- (double)_availableHeight;
- (struct CGSize)_adjustedMediaSize;
- (void)_configureCaption;
- (void)_configureHeadline;
- (id)mentionUserWithUsername:(id)arg1;
- (void)configureTextViewWithStoryItem:(id)arg1 mediaLayoutType:(unsigned long long)arg2 isSensitiveVerticalAd:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

