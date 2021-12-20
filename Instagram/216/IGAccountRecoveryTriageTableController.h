//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAccountRecoveryTriageTableViewDelegate-Protocol.h"

@class IGAccountRecoveryTriageContext, IGTableLayoutSpec, NSString;
@protocol IGAccountRecoveryTriageTableControllerDelegate;

@interface IGAccountRecoveryTriageTableController : NSObject <IGAccountRecoveryTriageTableViewDelegate>
{
    IGAccountRecoveryTriageContext *_context;
    IGTableLayoutSpec *_tableLayoutSpec;
    long long _selectedRow;
    id <IGAccountRecoveryTriageTableControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountRecoveryTriageTableControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_escapedAnnotatedStringForString:(id)arg1;
- (id)_cellDescriptionForRow:(long long)arg1;
- (id)_cellTitleForRow:(long long)arg1;
- (id)_tableLayoutSpec;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)accountRecoveryTypeForTableView:(id)arg1;
- (double)heightForAccountRecoveryTriageTableView:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

