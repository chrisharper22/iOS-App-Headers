//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class IGMedia, IGSpinnerLabelViewModel, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGSaveToCollectionsSectionControllerDelegate;

@interface IGSaveToCollectionsDataSource : NSObject <IGListAdapterDataSource>
{
    NSString *_module;
    NSArray *_collections;
    NSMutableArray *_items;
    IGUserSession *_userSession;
    IGMedia *_media;
    id <IGSaveToCollectionsSectionControllerDelegate> _selectionDelegate;
    IGSpinnerLabelViewModel *_spinnerViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGSpinnerLabelViewModel *spinnerViewModel; // @synthesize spinnerViewModel=_spinnerViewModel;
@property(nonatomic) __weak id <IGSaveToCollectionsSectionControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(retain, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSArray *collections; // @synthesize collections=_collections;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)fetchMoreIfAvailable;
- (void)fetch;
- (id)initWithUserSession:(id)arg1 media:(id)arg2 selectionDelegate:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

