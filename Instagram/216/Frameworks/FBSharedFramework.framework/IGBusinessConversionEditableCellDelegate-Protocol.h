//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSIndexPath, NSString, UITableViewCell;
@protocol IGBusinessConversionEditableCell;

@protocol IGBusinessConversionEditableCellDelegate <NSObject>
- (void)editableCellDidEndEditing:(UITableViewCell<IGBusinessConversionEditableCell> *)arg1;
- (_Bool)editableCellWantsReturn:(UITableViewCell<IGBusinessConversionEditableCell> *)arg1 withValue:(NSString *)arg2 forKey:(NSIndexPath *)arg3;
- (void)editableCellBeganEditing:(UITableViewCell<IGBusinessConversionEditableCell> *)arg1;
- (void)editableCell:(UITableViewCell<IGBusinessConversionEditableCell> *)arg1 didUpdateValue:(NSString *)arg2 forDataKey:(NSIndexPath *)arg3;
@end

