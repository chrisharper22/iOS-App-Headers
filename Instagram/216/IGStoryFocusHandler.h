//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGListAdapter, IGMedia, NSIndexPath, UIView;

@interface IGStoryFocusHandler : NSObject
{
    NSIndexPath *_currentIndexPath;
    IGMedia *_focusedStoryItem;
    IGListAdapter *_listAdapter;
    UIView *_focusedStoryView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *focusedStoryView; // @synthesize focusedStoryView=_focusedStoryView;
- (void)storyItemDidLoseFocus:(id)arg1;
- (void)storyItemDidGainFocus:(id)arg1;
- (void)storyItemWillGainFocus:(id)arg1;
- (id)initWithListAdapter:(id)arg1;

@end

