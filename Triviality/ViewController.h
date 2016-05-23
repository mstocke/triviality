//
//  ViewController.h
//  Triviality
//
//  Created by tstone10 on 5/22/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Quiz;
@interface ViewController : UIViewController

- (IBAction)ans1Action:(id)sender;
- (IBAction)ans2Action:(id)sender;
- (IBAction)ans3Action:(id)sender;
- (IBAction)startAgain:(id)sender;

@property (nonatomic, assign) NSInteger quizIndex;
@property (nonatomic, assign) NSInteger attemptCount; // check # of attempts at current question
@property (nonatomic, strong) Quiz * quiz;

// tutorial: https://www.raywenderlich.com/31814/objectively-speaking-2-a-crash-course-in-objective-c-for-ios-6
// possible trivia questions for quiz: http://www2.readingeagle.com/article.aspx?id=409878

@end

