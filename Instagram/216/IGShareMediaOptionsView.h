//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGAssetPlayerView, IGShareMediaDestinationButton, UIImageView;

@interface IGShareMediaOptionsView : UIView
{
    UIImageView *_imagePreviewView;
    IGAssetPlayerView *_playerView;
    IGShareMediaDestinationButton *_storiesButton;
    IGShareMediaDestinationButton *_feedButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGShareMediaDestinationButton *feedButton; // @synthesize feedButton=_feedButton;
@property(readonly, nonatomic) IGShareMediaDestinationButton *storiesButton; // @synthesize storiesButton=_storiesButton;
@property(retain, nonatomic) IGAssetPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *imagePreviewView; // @synthesize imagePreviewView=_imagePreviewView;
- (void)layoutSubviews;
- (id)init;

@end
