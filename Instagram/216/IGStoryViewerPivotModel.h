//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGStoryViewerPivotModel : NSObject
{
    NSArray *_pivotItems;
    long long _currentType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(readonly, copy, nonatomic) NSArray *pivotItems; // @synthesize pivotItems=_pivotItems;
- (id)initWithPivotItems:(id)arg1 currentType:(long long)arg2;

@end

