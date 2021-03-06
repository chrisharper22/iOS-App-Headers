//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSurveyQuestionController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IGGroupedTableView, IGSurveyQuestion, NSString;
@protocol IGSurveyQuestionControllerDelegate;

@interface IGSurveyTextualEmotionController : NSObject <UITableViewDataSource, UITableViewDelegate, IGSurveyQuestionController>
{
    id <IGSurveyQuestionControllerDelegate> _delegate;
    IGSurveyQuestion *_question;
    IGGroupedTableView *_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGGroupedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IGSurveyQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <IGSurveyQuestionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_colorForAnswerAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)contentView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

