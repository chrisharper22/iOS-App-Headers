//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShareSheetRowProtocol-Protocol.h"
#import "IGShareSheetTagProductsSectionControllerDelegate-Protocol.h"

@class IGSundialShoppingTagProductManager, NSString;
@protocol IGShareSheetTagProductsRowDelegate;

@interface IGShareSheetTagProductsRow : NSObject <IGShareSheetTagProductsSectionControllerDelegate, IGShareSheetRowProtocol>
{
    IGSundialShoppingTagProductManager *_tagProductsManager;
    id <IGShareSheetTagProductsRowDelegate> _delegate;
    NSString *_uuid;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)shareSheetTagProductsSectionController:(id)arg1 tagProductsManager:(id)arg2 didUpdateShoppingMetadata:(id)arg3;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)sectionControllerForRow;
- (id)initWithTagProductsManager:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
