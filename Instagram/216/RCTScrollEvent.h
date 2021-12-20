//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTEvent-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface RCTScrollEvent : NSObject <RCTEvent>
{
    struct CGPoint _scrollViewContentOffset;
    struct UIEdgeInsets _scrollViewContentInset;
    struct CGSize _scrollViewContentSize;
    struct CGRect _scrollViewFrame;
    double _scrollViewZoomScale;
    NSDictionary *_userData;
    unsigned short _coalescingKey;
    NSNumber *_viewTag;
    NSString *_eventName;
}

+ (id)moduleDotMethod;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;
- (id)arguments;
- (id)coalesceWithEvent:(id)arg1;
- (_Bool)canCoalesce;
- (id)body;
@property(readonly, nonatomic) unsigned short coalescingKey;
- (id)init;
- (id)initWithEventName:(id)arg1 reactTag:(id)arg2 scrollViewContentOffset:(struct CGPoint)arg3 scrollViewContentInset:(struct UIEdgeInsets)arg4 scrollViewContentSize:(struct CGSize)arg5 scrollViewFrame:(struct CGRect)arg6 scrollViewZoomScale:(double)arg7 userData:(id)arg8 coalescingKey:(unsigned short)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

