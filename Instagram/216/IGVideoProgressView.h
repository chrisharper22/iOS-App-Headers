//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, IGVideoInfo, NSMutableArray;

@interface IGVideoProgressView : UIView
{
    _Bool _lastClipIsSelected;
    _Bool _videoRecordingEnabled;
    _Bool _isLive;
    CDUnknownBlockType _progressBlock;
    IGVideoInfo *_videoInfo;
    double _maxVideoDuration;
    double _minVideoDuration;
    UIView *_minDurationView;
    NSMutableArray *_clipBarViews;
    UIView *_runningTimeBarView;
    UIView *_blinkerView;
    CADisplayLink *_displayLink;
    long long _counter;
    double _runningTime;
}

+ (double)defaultHeight;
- (void).cxx_destruct;
@property(nonatomic) double runningTime; // @synthesize runningTime=_runningTime;
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *blinkerView; // @synthesize blinkerView=_blinkerView;
@property(retain, nonatomic) UIView *runningTimeBarView; // @synthesize runningTimeBarView=_runningTimeBarView;
@property(retain, nonatomic) NSMutableArray *clipBarViews; // @synthesize clipBarViews=_clipBarViews;
@property(retain, nonatomic) UIView *minDurationView; // @synthesize minDurationView=_minDurationView;
@property(nonatomic) double minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(nonatomic) double maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) _Bool videoRecordingEnabled; // @synthesize videoRecordingEnabled=_videoRecordingEnabled;
@property(nonatomic) _Bool lastClipIsSelected; // @synthesize lastClipIsSelected=_lastClipIsSelected;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void)layoutSubviews;
- (void)_reloadAllClips;
- (void)_updateBlinker;
- (void)_onDisplayLinkDidFire:(id)arg1;
- (struct CGPoint)blinkerCenter;
- (void)_removeLastClip;
- (void)_addClip:(id)arg1;
- (void)_onClipAdded:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

