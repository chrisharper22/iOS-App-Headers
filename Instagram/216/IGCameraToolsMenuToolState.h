//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGCameraToolsMenuToolState : NSObject
{
    _Bool _visibleWhenCollapsed;
    _Bool _removing;
    double _collapsedAlpha;
    double _insertionPercentage;
    double _submenuExpansionPercentage;
}

@property(nonatomic) double submenuExpansionPercentage; // @synthesize submenuExpansionPercentage=_submenuExpansionPercentage;
@property(nonatomic, getter=isRemoving) _Bool removing; // @synthesize removing=_removing;
@property(nonatomic) double insertionPercentage; // @synthesize insertionPercentage=_insertionPercentage;
@property(nonatomic) _Bool visibleWhenCollapsed; // @synthesize visibleWhenCollapsed=_visibleWhenCollapsed;
@property(nonatomic) double collapsedAlpha; // @synthesize collapsedAlpha=_collapsedAlpha;

@end
