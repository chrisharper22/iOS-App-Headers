//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject
{
    NSCountedSet *_visibleListSections;
    NSMapTable *_visibleViewObjectMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *visibleViewObjectMap; // @synthesize visibleViewObjectMap=_visibleViewObjectMap;
@property(readonly, nonatomic) NSCountedSet *visibleListSections; // @synthesize visibleListSections=_visibleListSections;
- (void)didEndDisplayingCell:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 indexPath:(id)arg4;
- (void)willDisplayCell:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5;
- (void)didEndDisplayingSupplementaryView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 indexPath:(id)arg4;
- (void)willDisplaySupplementaryView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5;
- (void)_didEndDisplayingReusableView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5;
- (void)_willDisplayReusableView:(id)arg1 forListAdapter:(id)arg2 sectionController:(id)arg3 object:(id)arg4 indexPath:(id)arg5;
- (id)_pluckObjectForView:(id)arg1;
- (id)init;

@end
