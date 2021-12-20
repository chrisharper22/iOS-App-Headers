//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

@interface IGSundialVideoLayoutViewController : UIViewController
{
    MISSING_TYPE *backButtonIsLeftAligned;
    MISSING_TYPE *userSession;
    MISSING_TYPE *leftShadowView;
    MISSING_TYPE *rightShadowView;
    MISSING_TYPE *previewView;
    MISSING_TYPE *videoLayoutDuration;
    MISSING_TYPE *layoutView;
    MISSING_TYPE *sectionPlayers;
    MISSING_TYPE *shutterButton;
    MISSING_TYPE *acceptLayoutButton;
    MISSING_TYPE *cameraViewController;
    MISSING_TYPE *discardSectionButton;
    MISSING_TYPE *progressRing;
    MISSING_TYPE *contentRegion;
    MISSING_TYPE *hideFooterButtonsHandler;
    MISSING_TYPE *layoutDiscardedHandler;
    MISSING_TYPE *videoLayoutDurationUpdatedHandler;
    MISSING_TYPE *compositionCompletedHandler;
    MISSING_TYPE *composition;
    MISSING_TYPE *loggingContext;
    MISSING_TYPE *cameraToolsMenu;
    MISSING_TYPE *layoutVariantIndex;
    MISSING_TYPE *isCropModeEnabled;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)discardLayoutTapped;
- (void)teardown;
- (void)acceptLayoutTapped;
- (void)cameraWillStartRecording;
- (void)updateWithLayout:(id)arg1 index:(long long)arg2 analyticsString:(id)arg3;
- (void)addWithClip:(id)arg1;
@property(nonatomic, readonly) long long clipsAddedCount;
@property(nonatomic, readonly) _Bool addedAllClips;
@property(nonatomic) _Bool isCropModeEnabled; // @synthesize isCropModeEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserSession:(id)arg1 layout:(id)arg2 shutterButton:(id)arg3 cameraViewController:(id)arg4 contentRegion:(struct CGRect)arg5 loggingContext:(id)arg6 cameraToolsMenu:(id)arg7;
@property(nonatomic, copy) CDUnknownBlockType compositionCompletedHandler;
@property(nonatomic, copy) CDUnknownBlockType videoLayoutDurationUpdatedHandler;
@property(nonatomic, copy) CDUnknownBlockType layoutDiscardedHandler;
@property(nonatomic, copy) CDUnknownBlockType hideFooterButtonsHandler;
@property(nonatomic) double videoLayoutDuration; // @synthesize videoLayoutDuration;

@end

