//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

@class IGVideoTrimmerView;

@interface IGVideoEditingTrimmerViewController : IGViewController
{
    IGVideoTrimmerView *_trimmerView;
    double _playbackTime;
}

- (void).cxx_destruct;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLauncherSetProvider:(id)arg1 asset:(id)arg2 delegate:(id)arg3;

@end
