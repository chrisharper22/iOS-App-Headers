//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class IGTimeSpentReminderModel, NSString;

@interface IGTimeSpentReminderModelPayload : NSObject <IGUserSessionPayload>
{
    IGTimeSpentReminderModel *_reminderModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGTimeSpentReminderModel *reminderModel; // @synthesize reminderModel=_reminderModel;
- (id)initWithReminderModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

