//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGAsyncTask, IGSoundSyncLoadingIndicator, NSString, UIImageView, UIVisualEffectView;

@interface IGSoundSyncCompositionLoadingOverlayView : UIView
{
    UIImageView *_backgroundImageView;
    UIVisualEffectView *_blurView;
    IGSoundSyncLoadingIndicator *_loadingIndicator;
    IGAsyncTask *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAsyncTask *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *text;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

