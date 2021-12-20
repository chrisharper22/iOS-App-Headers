//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStatusBarVolumeViewType-Protocol.h>

@class IGFullWidthStatusBarVolumeViewConfiguration, IGTrackBarView, NSString;

@interface IGFullWidthStatusBarVolumeView : UIView <IGStatusBarVolumeViewType>
{
    IGTrackBarView *_trackBarView;
    IGFullWidthStatusBarVolumeViewConfiguration *_config;
    double _volume;
}

- (void).cxx_destruct;
@property(nonatomic) double volume; // @synthesize volume=_volume;
- (long long)preferredPresentationStyle;
- (double)preferredSlideDownOffset;
- (double)preferredHeight;
- (void)updateConfiguration:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
