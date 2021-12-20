//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShareSheetRowProtocol-Protocol.h"
#import "IGShareSheetRowWithImageSectionControllerDelegate-Protocol.h"

@class NSString;
@protocol IGShareSheetAdvancedSettingRowDelegate;

@interface IGShareSheetAdvancedSettingRow : NSObject <IGShareSheetRowWithImageSectionControllerDelegate, IGShareSheetRowProtocol>
{
    NSString *_uuid;
    id <IGShareSheetAdvancedSettingRowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShareSheetAdvancedSettingRowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)shareSheetRowWithImageDidSelectSectionController:(id)arg1;
- (id)sectionControllerForRow;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

